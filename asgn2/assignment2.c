#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIVE 1
#define DEAD 2
#define NONE -1

#define BINARYASSIGNMENT    1
#define OPERATION 	    2
#define GOTO	 	    3
#define IFGOTO	  	    4
#define FUNCTIONDECLARATION 5
#define FUNCTIONCALL	    6
#define RETURN 		    7
#define PRINTSTATEMENT	    8
#define ERROR		    9

#define TYPE_INT 	1
#define TYPE_FLOAT 	2
#define TYPE_CHAR 	3
#define TYPE_BOOL 	4

#define MEM		32

#define PRESENT 	1
#define NOTPRESENT 	2

#define ADD 		1
#define SUBTRACT	2
#define MULTIPLY	3
#define DIVIDE		4
#define MODULUS		5
#define LEQ		6
#define GEQ		7
#define EQEQ		8
#define LT 		9
#define GT 		10
#define NOTEQ		11
#define AND 		12
#define OR 		13

#define EMPTY		1
#define NONEMPTY	2

typedef struct variable_list {
	char name[10];
	int status;
	int nextuse;
} VL;

typedef struct address_descriptor{
	char name[10];
	int location[33];
} AD;

typedef struct register_descriptor{
	int status;
	int* variableindex;
} RD;

typedef struct symbol_table{
	char name[10];
	int type;
} ST;

typedef struct {
	int instructiontype;
	VL* in1;
	VL* in2;
	VL* out;
	char* target;
	int operator;
}Instruction3AC;


//get index of variable in variable list
int get_variable_index(VL* variablelist, char* variable, int length){
	int i;
	for(i=0;i<length;i++){
		if(strcmp(variablelist[i].name,variable)==0)
			return i;
	}
	// if variable not found.
	return -1;
}

//copied from internet :p
int cmpfnc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int isNumber(char* c){
	if(c[0]>='0' && c[0]<='9')
		return 1;
	return 0;
}

int isOperator(char* c){
	switch (c[0]){
		case '+':
		case '-':
		case '*':
		case '/':
		case '=':
		case '<':
		case '>':
		case '!':
		case '&':
		case '|':
		case '%':
		return 1;
		break;
		default:
		return 0;
	}
}

int isKeyword(char* c){
	if(strcmp(c,"ifgoto")==0 || strcmp(c,"goto")==0 || strcmp(c,"function")==0 || strcmp(c,"return")==0 || strcmp(c,"label")==0 || strcmp(c,"call")==0)
		return 1;
	return 0;
}

int number_of_variables = 0;
int number_of_lines = 0;

int get_register_for_operand(VL* variable, RD registerdescriptor[32], AD* variabledescriptor, AD* addressdescriptor, VL* variables, int line, VL nextusetable[number_of_lines][number_of_variables]){
	int i;
	for(i=0;i<32;i++){
		if(variabledescriptor->location[i]==PRESENT)
			return i;
	}
	for(i=0;i<32;i++){
		if(registerdescriptor[i].status == EMPTY)
			return i;
	}
	int max = 0, index = -1;
	VL next_variable;
	for(i=0;i<number_of_variables;i++){
		if(nextusetable[line][i].nextuse == NONE && nextusetable[line][i].status==DEAD){
			int j;
			for(j=0;j<32;j++){
				if(addressdescriptor[i].location[j]==PRESENT)
					return j;
			}
		}
		if(nextusetable[line][i].nextuse > max && nextusetable[line][i].status==DEAD){
			max=nextusetable[line][i].nextuse;
			index = i;
		}
	}
	return index;
}


int getregister(VL* variable, Instruction3AC* instruction, RD registerdescriptor[32], AD* variabledescriptor, AD* addressdescriptor, VL* variables, int line, VL nextusetable[number_of_lines][number_of_variables]){
	int i;
	for(i=0;i<32;i++){
		if(variabledescriptor->location[i]==PRESENT)
			return i;
	}
	if(instruction -> in1 != NULL){
		int index_of_in1 = get_variable_index(variables, instruction->in1->name, number_of_variables);
		if(line != number_of_lines-1 && nextusetable[line][i].nextuse==line && nextusetable[line+1][i].nextuse==NONE){
			int j;
			for(j=0;j<32;j++){
				if(addressdescriptor[index_of_in1].location[j]==PRESENT)
					return j;
			}
		}
	}
	for(i=0;i<32;i++){
		if(registerdescriptor[i].status==EMPTY)
			return i;
	}
	return get_register_for_operand(variable, registerdescriptor, variabledescriptor, addressdescriptor, variables, line, nextusetable);

}

int main(int argc, char** argv){
        //count the number of lines in the file
        FILE* fp;
        FILE*  copy_of_fp;
        if (argc >= 2){
                fp = fopen(argv[1], "r");
                copy_of_fp = fopen (argv[1], "r");
        }
        //int number_of_lines=0;
        if(fp == NULL)
                printf("Couldn't find the desired file\n");
        char c;
        for(c=getc(fp); c!=EOF; c= getc(fp)){
                if(c=='\n')
                        number_of_lines++;
		if(c==EOF){
			number_of_lines++;
			break;
		}
        }
	fclose(fp);

        //store the lines and number of words in each line
        char ** lines;
        int* number_of_words;

        number_of_words = (int *)malloc(number_of_lines*sizeof(int));
        lines = (char **)malloc(number_of_lines*sizeof(char *));
	char words[number_of_lines][10][10];


        int i,j;
        for(int i=0;i<number_of_lines;i++){
            lines[i]= (char *)malloc(100*sizeof(char));
            number_of_words[i]=0;
        }

        printf("Number of lines = %d\n", number_of_lines);

	i=0;
	ssize_t read;
	size_t len = 0;
	while (i<number_of_lines) {
            read = getline(&lines[i], &len, copy_of_fp);
	    i++;
            int j=0, k=0, l=0;
            char c=' ';
            while (j!=strlen(lines[i-1]) && c!='\n'){
                c=lines[i-1][j];
                if(c==','){
                    number_of_words[i-1]++;
		    words[i-1][k][l]='\0';
		    j++;
		    k++;
                    l=0;
		    //printf("%s\t",words[i-1][k-1]);
		    continue;
		}
		if(c=='\n'){
			number_of_words[i-1]++;
			words[i-1][k][l]='\0';
			l++;
			j++;
			printf("%d %s",number_of_words[i-1],lines[i-1]);	
            	}
		words[i-1][k][l]=c;
		j++; l++;
    	    }
    	}
    	free(lines);
    	//lines ka kaam khatam. Ab isko free kar diya.

    	VL variables[number_of_lines*3];
	//int number_of_variables=0;
	int k;
	for(i=0;i<number_of_lines;i++){
		for(j=0;j<number_of_words[i];j++){
			int flag=1;
			if(isKeyword(words[i][j]) || isNumber(words[i][j]) || isOperator(words[i][j])){
				continue;
			}
			for(k=0;k<number_of_variables;k++){
				if(strcmp(words[i][j],variables[k].name)==0)
					flag=0;
			}
			if(flag==1){
				strcpy(variables[number_of_variables++].name,words[i][j]);
			}
		}
	}

	//variables identify ho gaye hain.
	
	ST symboltable[number_of_variables];
	
	for(i=0;i<number_of_variables;i++){
		strcpy(symboltable[i].name,variables[i].name);
		symboltable[i].type=TYPE_INT;
	}
	printf("Symbol Table\n");
	for(i=0;i<number_of_variables;i++){
		printf("%s\t%d\n",symboltable[i].name,symboltable[i].type);
	}
    	printf("\n");
	

	//time to find out headers
	int headers[number_of_lines];
	int header_count = 1;
	headers[0]=0;
	for(i=0;i<number_of_lines;i++){
		if(strcmp(words[i][0],"goto")!=0 && strcmp(words[i][0],"ifgoto")!=0 && strcmp(words[i][0],"label")!=0){
			continue;
		}
		else{
			int flag = 0;
			for(j=0;j<header_count;j++){
				if(headers[j]==i+1)
					flag=1;
			}
			if (flag ==1)
				continue;
			headers[header_count++]=i+1;
			if(strcmp(words[i][0],"goto")==0){
				int flag2=0;
				for(j=0;j<header_count;j++){
					if(headers[j]==atoi(words[i][1]))
						flag2=1;
				}
				if(flag2==1)
					continue;
				headers[header_count++]=atoi(words[i][1]);
			}
			else if(strcmp(words[i][0],"ifgoto")==0){
				int flag2=0;
				for(j=0;j<header_count;j++){
					if(headers[j]==atoi(words[i][4]))
						flag2=1;
				}
				if(flag2==1)
					continue;
				headers[header_count++]=atoi(words[i][4]);
			}
	 	}
	}
	qsort(headers, header_count, sizeof(int), cmpfnc);
	//all header lines have now been captured
	
	for(i=0;i<header_count;i++)
		printf("Headers = %d\n",headers[i]);

    	//Now we move on to identifying the types of instructions.
	int type_of_instruction[number_of_lines];
	for(i=0;i<number_of_lines;i++){
		if(strcmp(words[i][0],"=")==0)
			type_of_instruction[i]=BINARYASSIGNMENT;
		else if(isOperator(words[i][0]))
			type_of_instruction[i]=OPERATION;
		else if(strcmp(words[i][0],"goto")==0)
			type_of_instruction[i]=GOTO;
		else if(strcmp(words[i][0],"ifgoto")==0)
			type_of_instruction[i]=IFGOTO;
		else if(strcmp(words[i][0],"return")==0)
			type_of_instruction[i]=RETURN;
		else if(strcmp(words[i][0],"label")==0)
			type_of_instruction[i]=FUNCTIONDECLARATION;
		else if(strcmp(words[i][0],"call")==0)
			type_of_instruction[i]=FUNCTIONCALL;
		else if(strcmp(words[i][0],"print")==0)
			type_of_instruction[i]=PRINTSTATEMENT;
		else
			type_of_instruction[i]=ERROR;
	}
	for(i=0;i<number_of_lines;i++)
		printf("type_of_instruction of line %d\t%d\n",i,type_of_instruction[i]);
	
	

	//type of instructions are now being identified. Now we need to generate the next use table and symbol table.
	VL nextusetable[number_of_lines][number_of_variables];
	printf("header_count = %d\n",header_count);
	for(i=0;i<header_count;i++)
		printf("Headers = %d\n",headers[i]);

	for (i=0;i<number_of_lines;i++){
		for(j=0;j<number_of_variables;j++){
			strcpy(nextusetable[i][j].name,variables[j].name);
			nextusetable[i][j].status = DEAD;
			nextusetable[i][j].nextuse = NONE;
		}
	}
	int line_number;
	
	for(i=1;i<header_count;i++){
		for(line_number=headers[i]-1;line_number>=headers[i-1];line_number--){
			if(line_number < headers[i]-1){
				for(k=0;k<number_of_variables;k++)
					nextusetable[line_number][k].nextuse=nextusetable[line_number+1][k].nextuse;
			}
			printf("At line number %d \n", line_number);
			for(k=0;k<number_of_variables;k++)
				nextusetable[line_number][k].nextuse=nextusetable[line_number+1][k].nextuse;
			switch (type_of_instruction[line_number]){
			case BINARYASSIGNMENT:
			nextusetable[line_number][get_variable_index(variables,words[line_number][1],number_of_variables)].status=LIVE;
			if(!isNumber(words[line_number][2])){
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].status=LIVE;
			}
			break;
			case OPERATION:
			nextusetable[line_number][get_variable_index(variables,words[line_number][1],number_of_variables)].status=LIVE;
			if(!isNumber(words[line_number][2])){
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].status=LIVE;
			}
			if(!isNumber(words[line_number][3])){
				nextusetable[line_number][get_variable_index(variables,words[line_number][3],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][3],number_of_variables)].status=LIVE;
			}
			break;
			case GOTO:
			break;
			case IFGOTO:
			if(!isNumber(words[line_number][2])){
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].status=LIVE;
			}
			if(!isNumber(words[line_number][3])){
				nextusetable[line_number][get_variable_index(variables,words[line_number][3],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][3],number_of_variables)].status=LIVE;
			}
			break;
			case FUNCTIONCALL:
			break;
			case FUNCTIONDECLARATION:
			break;
			case ERROR:
			break;
			case RETURN:
			break;
			case PRINTSTATEMENT:
			if(!isNumber(words[line_number][1])){
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].status=LIVE;
			}
			break;
			
		}
		}
	}
	for(line_number=number_of_lines-1;line_number>=headers[header_count-1];line_number--){
		printf("At line number %d \n", line_number);
		if(line_number < number_of_lines-1){
			for(k=0;k<number_of_variables;k++)
				nextusetable[line_number][k].nextuse=nextusetable[line_number+1][k].nextuse;
		}
		switch(type_of_instruction[line_number]){
			case BINARYASSIGNMENT:
			nextusetable[line_number][get_variable_index(variables,words[line_number][1],number_of_variables)].status=LIVE;
			if(!isNumber(words[line_number][2])){
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].status=LIVE;
			}
			break;
			case OPERATION:
			nextusetable[line_number][get_variable_index(variables,words[line_number][1],number_of_variables)].status=LIVE;
			if(!isNumber(words[line_number][2])){
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].status=LIVE;
			}
			if(!isNumber(words[line_number][3])){
				nextusetable[line_number][get_variable_index(variables,words[line_number][3],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][3],number_of_variables)].status=LIVE;
			}
			break;
			case GOTO:
			break;
			case IFGOTO:
			if(!isNumber(words[line_number][2])){
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].status=LIVE;
			}
			if(!isNumber(words[line_number][3])){
				nextusetable[line_number][get_variable_index(variables,words[line_number][3],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][3],number_of_variables)].status=LIVE;
			}
			break;
			case FUNCTIONCALL:
			break;
			case FUNCTIONDECLARATION:
			break;
			case ERROR:
			break;
			case RETURN:
			break;
			case PRINTSTATEMENT:
			if(!isNumber(words[line_number][1])){
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].status=LIVE;
			}
			break;
			
		}
	}
	// line_number=0;
	// printf("At line number %d \n", line_number);
	// for(k=0;k<number_of_variables;k++)
	// 	nextusetable[line_number][k].nextuse=nextusetable[line_number+1][k].nextuse;
	// switch (type_of_instruction[line_number]){
	// 	case BINARYASSIGNMENT:
	// 	printf("Changing the status of variable number %d\n",get_variable_index(variables,words[line_number][1],number_of_variables));
	// 	nextusetable[line_number][get_variable_index(variables,words[line_number][1],number_of_variables)].status=LIVE;
	// 	if(!isNumber(words[line_number][2])){
	// 		nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].nextuse=line_number;
	// 		nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].status=LIVE;
	// 	}
	// 	break;
	// 	case OPERATION:
	// 	nextusetable[line_number][get_variable_index(variables,words[line_number][1],number_of_variables)].status=LIVE;
	// 	if(!isNumber(words[line_number][2])){
	// 		nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].nextuse=line_number;
	// 		nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].status=LIVE;
	// 	}
	// 	if(!isNumber(words[line_number][3])){
	// 		nextusetable[line_number][get_variable_index(variables,words[line_number][3],number_of_variables)].nextuse=line_number;
	// 		nextusetable[line_number][get_variable_index(variables,words[line_number][3],number_of_variables)].status=LIVE;
	// 	}
	// 	break;
	// 	case GOTO:
	// 	break;
	// 	case IFGOTO:
	// 	if(!isNumber(words[line_number][2])){
	// 		nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].nextuse=line_number;
	// 		nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].status=LIVE;
	// 	}
	// 	if(!isNumber(words[line_number][3])){
	// 		nextusetable[line_number][get_variable_index(variables,words[line_number][3],number_of_variables)].nextuse=line_number;
	// 		nextusetable[line_number][get_variable_index(variables,words[line_number][3],number_of_variables)].status=LIVE;
	// 	}
	// 	break;
	// 	case FUNCTIONCALL:
	// 	break;
	// 	case FUNCTIONDECLARATION:
	// 	break;
	// 	case ERROR:
	// 	break;
	// 	case RETURN:
	// 	break;
	// 	case PRINTSTATEMENT:
	// 	if(!isNumber(words[line_number][1])){
	// 		nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].nextuse=line_number;
	// 		nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].status=LIVE;
	// 	}
	// 	break;
		
	// }
	for(i=0;i<number_of_lines;i++){
		printf("Next use table for line %d is :\n",i);
		for(j=0;j<number_of_variables;j++){
			printf("%s\t%d\t%d\n",nextusetable[i][j].name,nextusetable[i][j].nextuse,nextusetable[i][j].status);
		}
	}

	//next use table is up and working. Now we move on to the address descriptor table.
	AD addressdescriptor[number_of_variables];
	for(i=0;i<number_of_variables;i++){
		strcpy(addressdescriptor[i].name,variables[i].name);
		for(j=0;j<33;j++){
			addressdescriptor[i].location[j]=NOTPRESENT;
		}
	}

	//register descriptor table
	RD registerdescriptor[32];
	for(i=0;i<32;i++){
		registerdescriptor[i].variableindex = (int *)malloc(number_of_variables*sizeof(int));
		registerdescriptor[i].status = EMPTY;
		for(j=0;j<number_of_variables;j++){
			registerdescriptor[i].variableindex[j]=NOTPRESENT;
		}
	}

	printf("Address descriptor table\n");
	for(i=0;i<number_of_variables;i++){
		printf("%s\t",addressdescriptor[i].name);
		for(j=0;j<33;j++)
			printf("%d\t",addressdescriptor[i].location[j]);
		printf("\n");
	}

	Instruction3AC ir[number_of_lines];
	for(i=0;i<number_of_lines;i++){
		int in1,in2,out;
		switch (type_of_instruction[i]){
			printf("Here in BINARYASSIGNMENT\n");
			case BINARYASSIGNMENT:
				if(!isNumber(words[i][2])){
					in1 = get_variable_index(variables,words[i][2],number_of_variables);
					ir[i].in1= &(variables[in1]);
				}
				else
					ir[i].in1= NULL;
				out = get_variable_index(variables,words[i][1],number_of_variables);
				ir[i].instructiontype=BINARYASSIGNMENT;
				ir[i].out= &(variables[out]);
				break;

			case OPERATION:
				if(!isNumber(words[i][2])){
					in1 = get_variable_index(variables,words[i][2],number_of_variables);
					ir[i].in1 = &(variables[in1]);
				}
				else
					ir[i].in1=NULL;
				if(!isNumber(words[i][3])){
					in2 = get_variable_index(variables,words[i][3],number_of_variables);
					ir[i].in2 = &(variables[in2]);
				}
				else
					ir[i].in2=NULL;
				out = get_variable_index(variables,words[i][1],number_of_variables);
				ir[i].instructiontype=OPERATION;
				ir[i].out = &(variables[out]);
				if(strcmp(words[i][0],">=")==0)
					ir[i].operator= GEQ;
				else if(strcmp(words[i][0],"<=")==0)
					ir[i].operator= LEQ;
				else if(strcmp(words[i][0],"<")==0)
					ir[i].operator= LT;
				else if(strcmp(words[i][0],">")==0)
					ir[i].operator= GT;
				else if(strcmp(words[i][0],"+")==0)
					ir[i].operator= ADD;
				else if(strcmp(words[i][0],"-")==0)
					ir[i].operator= SUBTRACT;
				else if(strcmp(words[i][0],"*")==0)
					ir[i].operator= MULTIPLY;
				else if(strcmp(words[i][0],"/")==0)
					ir[i].operator= DIVIDE;
				else if(strcmp(words[i][0],"%")==0)
					ir[i].operator= MODULUS;
				else if(strcmp(words[i][0],"!=")==0)
					ir[i].operator= NOTEQ;
				else if(strcmp(words[i][0],"==")==0)
					ir[i].operator= EQEQ;
				else if(strcmp(words[i][0],"&")==0)
					ir[i].operator= AND;
				else if(strcmp(words[i][0],"|")==0)
					ir[i].operator= OR;
				break;
			case GOTO:
				ir[i].instructiontype = GOTO;
				strcpy(ir[i].target, words[i][1]);
				break;
			case IFGOTO:
				ir[i].instructiontype = IFGOTO;
				if(strcmp(words[i][1],">=")==0)
					ir[i].operator= GEQ;
				else if(strcmp(words[i][1],"<=")==0)
					ir[i].operator= LEQ;
				else if(strcmp(words[i][1],"<")==0)
					ir[i].operator= LT;
				else if(strcmp(words[i][1],">")==0)
					ir[i].operator= GT;
				else if(strcmp(words[i][1],"+")==0)
					ir[i].operator= ADD;
				else if(strcmp(words[i][1],"-")==0)
					ir[i].operator= SUBTRACT;
				else if(strcmp(words[i][1],"*")==0)
					ir[i].operator= MULTIPLY;
				else if(strcmp(words[i][1],"/")==0)
					ir[i].operator= DIVIDE;
				else if(strcmp(words[i][1],"%")==0)
					ir[i].operator= MODULUS;
				else if(strcmp(words[i][1],"!=")==0)
					ir[i].operator= NOTEQ;
				else if(strcmp(words[i][1],"==")==0)
					ir[i].operator= EQEQ;
				else if(strcmp(words[i][1],"&")==0)
					ir[i].operator= AND;
				else if(strcmp(words[i][1],"|")==0)
					ir[i].operator= OR;
				if(!isNumber(words[i][2])){
					in1 = get_variable_index(variables,words[i][2],number_of_variables);
					ir[i].in1= &(variables[in1]);
				}
				else
					ir[i].in1= NULL;
				if(!isNumber(words[i][3])){
					in2 = get_variable_index(variables,words[i][3],number_of_variables);
					ir[i].in2= &(variables[in2]);
				}
				else
					ir[i].in2= NULL;
				
				break;
			
//			case FUNCTIONDECLARATION:
//				ir[i].instructiontype = FUNCTIONDECLARATION;
//				ir[i].target = words[i][1];
//			break;
//			case FUNCTIONCALL:
//				ir[i].instructiontype = FUNCTIONCALL;
//				ir[i].target = words[i][1];
			default:
				ir[i].instructiontype=type_of_instruction[i];
		}
	}
	//the most important function, getreg
	for(i=0;i<number_of_lines;i++){
		printf("%d\n", ir[i].instructiontype);
	}
	FILE* fp1;
	fp1 = fopen("assignment2.asm","w");
	if (fp1 == NULL)
	{
		printf("File does not exists \n");
		return 0;
	}
	printf("%d\n",get_register_for_operand(&variables[1],registerdescriptor,&addressdescriptor[1],addressdescriptor,variables, 1, nextusetable));
	
	// Getreg will do everything. It will update the addressdescriptor table, registerdescriptor table and any other tables or value in memory.
	// Also we need to add an extra field like HIGH PRIORITY sth, for making sure that c does not get same register as that of b for a=b+c
	
	for(i=0;i<number_of_lines;i++){
		switch (ir[i].instructiontype){
			int var_index_out;
			int reg_index_out;
			int var_index_in1;
			int var_index_in2;
			int reg_index_in1;
			int reg_index_in2;
			int x,y;
			case BINARYASSIGNMENT:
				printf("Here in binary assignment\n");
				var_index_out = get_variable_index(variables, ir[i].out->name, number_of_variables);
				reg_index_out = get_register_for_operand(ir[i].out, registerdescriptor, &addressdescriptor[var_index_out], addressdescriptor, variables, i, nextusetable);
				
				for(x=0;x<number_of_variables;x++){
					if(registerdescriptor[reg_index_out].variableindex[x]==PRESENT){
						addressdescriptor[j].location[reg_index_out]=NOTPRESENT;
						registerdescriptor[reg_index_out].variableindex[x]=NOTPRESENT;
						//write a line to move it to memory, if it is not present in any other register.
					}
				}
				registerdescriptor[reg_index_out].variableindex[var_index_out]= PRESENT;
				registerdescriptor[reg_index_out].status=NONEMPTY;
				addressdescriptor[var_index_out].location[reg_index_out]=PRESENT;
				addressdescriptor[var_index_out].location[MEM]= NOTPRESENT;
				if(ir[i].in1==NULL){
					fprintf(fp1,"addi $%d,$0,%d\n",reg_index_out,atoi(words[i][2]));
					break;
				}
				else{
					var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
					reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
					for(x=0;x<number_of_variables;x++){
						if(registerdescriptor[reg_index_in1].variableindex[x]==PRESENT){
							addressdescriptor[j].location[reg_index_in1]=NOTPRESENT;
							registerdescriptor[reg_index_in1].variableindex[x]=NOTPRESENT;
							//write a line to move it to memory, if it is not present in any other register.
						}
					}
					registerdescriptor[reg_index_in1].variableindex[var_index_out]= PRESENT;
					registerdescriptor[reg_index_in1].status=NONEMPTY;
					addressdescriptor[var_index_in1].location[reg_index_out]=PRESENT;
					addressdescriptor[var_index_in1].location[MEM]= NOTPRESENT;
					fprintf(fp1,"lw $%d %s\nadd $%d,$0,$%d\n",reg_index_in1,ir[i].in1->name,reg_index_out,reg_index_in1);
					break;
				}
			// only support addition, subtraction etc.
			// now only support addition.
			case OPERATION:
				var_index_out = get_variable_index(variables, ir[i].out->name, number_of_variables);
				reg_index_out = get_register_for_operand(ir[i].out, registerdescriptor, &addressdescriptor[var_index_out], addressdescriptor, variables, i, nextusetable);
				if(ir[i].in1==NULL && ir[i].in2==NULL){
					fprintf(fp1,"addi $%d,%d,%d\n",reg_index_out,atoi(words[i][2]),atoi(words[i][3]));
					break;
				}
				else if(ir[i].in1!=NULL && ir[i].in2==NULL){
					var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
					reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
					fprintf(fp1,"lw $%d %s\naddi $%d,$%d,%d\n",reg_index_in1,ir[i].in1->name,reg_index_out,reg_index_in1,atoi(words[i][3]));
					break;
				}
				else if(ir[i].in1==NULL && ir[i].in2!=NULL){
					var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
					reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
					fprintf(fp1,"lw $%d %s\naddi $%d,%d,$%d\n",reg_index_in2,ir[i].in2->name,reg_index_out,atoi(words[i][2]),reg_index_in2);
					break;
				}
				else{
					var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
					reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
					var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
					reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
					fprintf(fp1,"lw $%d %s\nlw $%d %s\nadd $%d,$%d,$%d\n",reg_index_in1,ir[i].in1->name,reg_index_in2,ir[i].in2->name,reg_index_out,reg_index_in1,reg_index_in2);
					break;
				}
				
		}
	}
	printf("Here\n");

	return 0;
}
