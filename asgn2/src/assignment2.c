#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIVE	1
#define DEAD	2
#define NONE	-1

#define BINARYASSIGNMENT 	1
#define OPERATION		2
#define GOTO			3
#define IFGOTO			4
#define FUNCTIONDECLARATION	5
#define FUNCTIONCALL		6
#define RETURN			7
#define PRINTSTATEMENT		8
#define ERROR			9
#define LABEL 			10
#define INPUT 			11
#define STORETOARRAY	12
#define LOADFROMARRAY	13
#define DECLAREARRAY	14

#define TYPE_INT 	1
#define TYPE_FLOA 	2
#define TYPE_CHAR	3
#define TYPE_BOOL	4
#define TYPE_ARRAY	5

#define MEM		32

#define PRESENT		1
#define NOTPRESENT	2

#define ADD 		1
#define SUBTRACT 	2
#define MULTIPLY 	3
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
#define NONEMPTY 	2

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
	int size;
} ST;

typedef struct {
	int instructiontype;
	VL* in1;
	VL* in2;
	VL* out;
	char target[10];
	int operator;
}Instruction3AC;

int flagforending = 0;

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


void flushAllRegisters(RD* reg_desc, AD* addr_desc, int numOfVars, FILE* fpFunc){
	int i,j;
	for(i=0;i<numOfVars;i++){
		for(j=0;j<32;j++){
			if(addr_desc[i].location[j]==PRESENT){
				fprintf(fpFunc,"	sw $s%d, %s\n", j, addr_desc[i].name);
				break;
			}
		}
		for(j=0;j<32;j++){
			addr_desc[i].location[j]=NOTPRESENT;
		}
		addr_desc[i].location[MEM]=PRESENT;
	}
	for(i=0;i<8;i++){
		reg_desc[i].status = EMPTY;
		for(j=0;j<numOfVars;j++){
			reg_desc[i].variableindex[j] = NOTPRESENT;
		}
	}
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
// added print as a keyword
int isKeyword(char* c){
	if(strcmp(c,"ifgoto")==0 || strcmp(c,"goto")==0 || strcmp(c,"function")==0 || strcmp(c,"return")==0 || strcmp(c,"label")==0 || strcmp(c,"call")==0 || strcmp(c,"print")==0 || strcmp(c,"func")==0 || strcmp(c,"input")==0 || strcmp(c,"array")==0 || strcmp(c,"sta")==0 || strcmp(c,"lfa")==0)
		return 1;
	return 0;
}

//This function would try to update everything as much as possible. I don't have any other1 solutions if it does not.
void update(int varIndex, int regIndex, RD* regDes, AD* addDes, int numOfVars, FILE* fpFunc,char* nameVariable,int isInput,int isWord){
	int x;
	int flag1;
	int y;
	//fprintf(fpFunc,"here2\n");
	//if isWord true hai to varIndex kuch bhi dedo yaar
	for(x=0;x<numOfVars;x++){
		if(!isWord){
			if(x==varIndex){
				//fprintf(fpFunc,"here3\n");
				continue;
			}
		}
		if(regDes[regIndex].variableindex[x]==PRESENT){
			addDes[x].location[regIndex]=NOTPRESENT;
			regDes[regIndex].variableindex[x]=NOTPRESENT;
			flag1=0;
			for(y=0;y<8;y++){
				if(addDes[x].location[y]==PRESENT) {
					flag1=1;
					break;
				}
			}
			if(flag1==0){
				addDes[x].location[MEM]=PRESENT;
				//fprintf(fpFunc,"here\n");
				fprintf(fpFunc,"	sw $s%d, %s\n",regIndex,addDes[x].name);
			}
		}
	}
	if(isInput && !isWord){
		if(regDes[regIndex].variableindex[varIndex]==NOTPRESENT)
			fprintf(fpFunc,"	lw $s%d, %s\n",regIndex,nameVariable);
	}
	if(!isWord) regDes[regIndex].variableindex[varIndex]= PRESENT;
	regDes[regIndex].status=NONEMPTY;
	if(!isWord){
		addDes[varIndex].location[regIndex]=PRESENT;
		addDes[varIndex].location[MEM]= NOTPRESENT;
		strcpy(addDes[varIndex].name,nameVariable);
	}
	//fprintf(fpFunc,"here1\n");
	return ;
}

//for the current version this only frees the given register. But later we can add support for loading again to the variables from which the register was snatched. Though this would mean same number of instructions as it does not matter whether the loading occurs here or later.
void return_update_for_word(RD* regDes,int regIndex){
	regDes[regIndex].status=EMPTY;
}

int number_of_variables = 0;
int number_of_lines = 0;

int get_register_for_operand(VL* variable, RD registerdescriptor[8], AD* variabledescriptor, AD* addressdescriptor, VL* variables, int line, VL nextusetable[number_of_lines][number_of_variables]){
	int i;
	for(i=0;i<8;i++){
		if(variabledescriptor->location[i]==PRESENT){
			//printf("here check %d, %s\n",i,variable->name);
			return i;
		}
	}
	for(i=0;i<8;i++){
		if(registerdescriptor[i].status == EMPTY){
			//printf("here check1 %d, %s\n",i,variable->name);
			return i;
		}
	}
	int max = 0, index = -1;
	VL next_variable;
	for(i=0;i<number_of_variables;i++){
		if(nextusetable[line][i].nextuse == NONE && nextusetable[line][i].status==DEAD){
			int j;
			for(j=0;j<8;j++){
				if(addressdescriptor[i].location[j]==PRESENT)
					return j;
			}
		}
		if(nextusetable[line][i].nextuse > max && nextusetable[line][i].status==DEAD){
			max=nextusetable[line][i].nextuse;
			index = i;
		}
		//printf("Here you are\n");
	}
	return index;
}

// This function would try its best to find an empty register for a word. assign this register the value for this word and then free it.
// it would return the index of new register
int get_register_for_word(RD registerdescriptor[8], AD* addressdescriptor, int line, VL nextusetable[number_of_lines][number_of_variables]){
	int i;
	for(i=0;i<8;i++){
		if(registerdescriptor[i].status == EMPTY){
			//printf("here check1 %d, %s\n",i,variable->name);
			return i;
		}
	}
	int max = 0, index = -1;
	VL next_variable;
	for(i=0;i<number_of_variables;i++){
		if(nextusetable[line][i].nextuse == NONE && nextusetable[line][i].status==DEAD){
			int j;
			for(j=0;j<8;j++){
				if(addressdescriptor[i].location[j]==PRESENT)
					return j;
			}
		}
		if(nextusetable[line][i].nextuse > max && nextusetable[line][i].status==DEAD){
			max=nextusetable[line][i].nextuse;
			index = i;
		}
		//printf("Here you are\n");
	}
	return index;
}

int getregister(VL* variable, Instruction3AC* instruction, RD registerdescriptor[8], AD* variabledescriptor, AD* addressdescriptor, VL* variables, int line, VL nextusetable[number_of_lines][number_of_variables]){
	int i;
	for(i=0;i<8;i++){
		if(variabledescriptor->location[i]==PRESENT)
			return i;
	}
	if(instruction -> in1 != NULL){
		int index_of_in1 = get_variable_index(variables, instruction->in1->name, number_of_variables);
		if(line != number_of_lines-1 && nextusetable[line][i].nextuse==line && nextusetable[line+1][i].nextuse==NONE){
			int j;
			for(j=0;j<8;j++){
				if(addressdescriptor[index_of_in1].location[j]==PRESENT)
					return j;
			}
		}
	}
	for(i=0;i<8;i++){
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

	//printf("Number of lines = %d\n", number_of_lines);

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
			//printf("%d %s",number_of_words[i-1],lines[i-1]);	
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
			if(isKeyword(words[i][j]) || isNumber(words[i][j]) || isOperator(words[i][j]) || strcmp(words[i][0],"sta")==0 || strcmp(words[i][0],"lfa")==0){
				continue;
			}
			for(k=0;k<number_of_variables;k++){
				if(strcmp(words[i][j],variables[k].name)==0)
					flag=0;
			}
			if(flag==1 && !isKeyword(words[i][0])){
				strcpy(variables[number_of_variables++].name,words[i][j]);
			}
			if(flag==1 && (strcmp(words[i][0],"array")==0)){
				strcpy(variables[number_of_variables++].name,words[i][j]);
			}
		}
	}

	//variables identify ho gaye hain.
	
	ST symboltable[number_of_variables];
	
	for(i=0;i<number_of_variables;i++){
		strcpy(symboltable[i].name,variables[i].name);
		symboltable[i].type=TYPE_INT;
		symboltable[i].size=1;
	}
	//printf("Symbol Table\n");
	//for(i=0;i<number_of_variables;i++){
	//	printf("%s\t%d\n",symboltable[i].name,symboltable[i].type);
	//}
	//printf("\n");
	for(i=0;i<number_of_lines;i++){
		if(strcmp(words[i][0],"array")==0){
			symboltable[get_variable_index(variables, words[i][1], number_of_variables)].type=TYPE_ARRAY;
			symboltable[get_variable_index(variables, words[i][1], number_of_variables)].size=atoi(words[i][2]);
		}
	}

	//time to find out headers
	int headers[number_of_lines];
	int header_count = 1;
	headers[0]=0;
	for(i=0;i<number_of_lines;i++){
		if(strcmp(words[i][0],"goto")!=0 && strcmp(words[i][0],"ifgoto")!=0 && strcmp(words[i][0],"label")!=0 && strcmp(words[i][0],"func")!=0 && strcmp(words[i][0],"call")!=0){
			continue;
		}
		else{
			int flag = 0;
			for(j=0;j<header_count;j++){
				if(headers[j]==i+1)
					flag=1;
			}
			if (flag != 1)
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
			type_of_instruction[i]=LABEL;
		else if(strcmp(words[i][0],"func")==0)
			type_of_instruction[i]=FUNCTIONDECLARATION;
		else if(strcmp(words[i][0],"call")==0)
			type_of_instruction[i]=FUNCTIONCALL;
		else if(strcmp(words[i][0],"print")==0)
			type_of_instruction[i]=PRINTSTATEMENT;
		else if(strcmp(words[i][0],"input")==0)
			type_of_instruction[i]=INPUT;
		else if(strcmp(words[i][0],"array")==0)
			type_of_instruction[i]=DECLAREARRAY;
		else if(strcmp(words[i][0],"sta")==0)
			type_of_instruction[i]=STORETOARRAY;
		else if(strcmp(words[i][0],"lfa")==0)
			type_of_instruction[i]=LOADFROMARRAY;
		else
			type_of_instruction[i]=ERROR;
	}
	//for(i=0;i<number_of_lines;i++)
		//printf("type_of_instruction of line %d\t%d\n",i,type_of_instruction[i]);
	
	

	//type of instructions are now being identified. Now we need to generate the next use table and symbol table.
	VL nextusetable[number_of_lines][number_of_variables];
	//printf("header_count = %d\n",header_count);
	//for(i=0;i<header_count;i++)
		//printf("Headers = %d\n",headers[i]);

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
			//printf("At line number %d \n", line_number);
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
			case LABEL:
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
			case STORETOARRAY:
				nextusetable[line_number][get_variable_index(variables,words[line_number][1],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][1],number_of_variables)].status=LIVE;	
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].status=LIVE;	
			break;
			case LOADFROMARRAY:
				nextusetable[line_number][get_variable_index(variables,words[line_number][1],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][1],number_of_variables)].status=LIVE;	
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].status=LIVE;	
			break;
			
		}
		}
	}
	for(line_number=number_of_lines-1;line_number>=headers[header_count-1];line_number--){
		//printf("At line number %d \n", line_number);
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
			case STORETOARRAY:
				nextusetable[line_number][get_variable_index(variables,words[line_number][1],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][1],number_of_variables)].status=LIVE;	
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].status=LIVE;	
			break;
			case LOADFROMARRAY:
				nextusetable[line_number][get_variable_index(variables,words[line_number][1],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][1],number_of_variables)].status=LIVE;	
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].nextuse=line_number;
				nextusetable[line_number][get_variable_index(variables,words[line_number][2],number_of_variables)].status=LIVE;	
			break;
			
		}
	}
	// for(i=0;i<number_of_lines;i++){
	// 	//printf("Next use table for line %d is :\n",i);
	// 	for(j=0;j<number_of_variables;j++){
	// 		//printf("%s\t%d\t%d\n",nextusetable[i][j].name,nextusetable[i][j].nextuse,nextusetable[i][j].status);
	// 	}
	// }

	//next use table is up and working. Now we move on to the address descriptor table.
	AD addressdescriptor[number_of_variables];
	for(i=0;i<number_of_variables;i++){
		strcpy(addressdescriptor[i].name,variables[i].name);
		for(j=0;j<33;j++){
			addressdescriptor[i].location[j]=NOTPRESENT;
		}
	}

	//register descriptor table
	RD registerdescriptor[8];
	for(i=0;i<8;i++){
		registerdescriptor[i].variableindex = (int *)malloc(number_of_variables*sizeof(int));
		registerdescriptor[i].status = EMPTY;
		for(j=0;j<number_of_variables;j++){
			registerdescriptor[i].variableindex[j]=NOTPRESENT;
		}
	}

	//printf("Address descriptor table\n");
	//for(i=0;i<number_of_variables;i++){
		//printf("%s\t",addressdescriptor[i].name);
	//	for(j=0;j<33;j++)
			//printf("%d\t",addressdescriptor[i].location[j]);
		//printf("\n");
	//}

	Instruction3AC ir[number_of_lines];
	for(i=0;i<number_of_lines;i++){
		int in1,in2,out;
		switch (type_of_instruction[i]){
			case BINARYASSIGNMENT:
				//printf("Here in BINARYASSIGNMENT\n");
				//printf("here12\n");
				if(!isNumber(words[i][2])){
					in1 = get_variable_index(variables,words[i][2],number_of_variables);
					ir[i].in1= &(variables[in1]);
				}
				else
					ir[i].in1= NULL;
				out = get_variable_index(variables,words[i][1],number_of_variables);
				ir[i].instructiontype=BINARYASSIGNMENT;
				ir[i].out= &(variables[out]);
				//printf("here11\n");
				break;

			case OPERATION:
			//printf("here13\n");
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
				if(strcmp(words[i][0],"+")==0)
					ir[i].operator= ADD;
				else if(strcmp(words[i][0],"-")==0)
					ir[i].operator= SUBTRACT;
				else if(strcmp(words[i][0],"*")==0)
					ir[i].operator= MULTIPLY;
				else if(strcmp(words[i][0],"/")==0)
					ir[i].operator= DIVIDE;
				else if(strcmp(words[i][0],"%")==0)
					ir[i].operator= MODULUS;
				else if(strcmp(words[i][0],"&")==0)
					ir[i].operator= AND;
				else if(strcmp(words[i][0],"|")==0)
					ir[i].operator= OR;
				//printf("here14\n");
				break;
			case GOTO:
				ir[i].instructiontype = GOTO;
				strcpy(ir[i].target, words[i][1]);
				break;
			case IFGOTO:
				//printf("here18\n");
				ir[i].instructiontype = IFGOTO;
				if(strcmp(words[i][1],">=")==0)
					ir[i].operator= GEQ;
				else if(strcmp(words[i][1],"<=")==0){
					//printf("here111\n");
					ir[i].operator= LEQ;
				}
				else if(strcmp(words[i][1],"<")==0)
					ir[i].operator= LT;
				else if(strcmp(words[i][1],">")==0)
					ir[i].operator= GT;
				else if(strcmp(words[i][1],"!=")==0)
					ir[i].operator= NOTEQ;
				else if(strcmp(words[i][1],"==")==0)
					ir[i].operator= EQEQ;
				if(!isNumber(words[i][2])){
					//printf("here21\n");
					in1 = get_variable_index(variables,words[i][2],number_of_variables);
					ir[i].in1= &(variables[in1]);
					//printf("here22\n");
				}
				else
					ir[i].in1= NULL;
				if(!isNumber(words[i][3])){
					//printf("here23\n");
					in2 = get_variable_index(variables,words[i][3],number_of_variables);
					ir[i].in2= &(variables[in2]);
				}
				else{
					//printf("here24\n");
					ir[i].in2= NULL;
				}
				//printf("here25\n");
				//printf("%s\n",words[i][4]);
				strcpy(ir[i].target,words[i][4]);
				//printf("here19\n");
				break;
			case LABEL:
				ir[i].instructiontype=LABEL;
				strcpy(ir[i].target,words[i][1]);
				break;
			case FUNCTIONDECLARATION:
				ir[i].instructiontype = FUNCTIONDECLARATION;
				strcpy(ir[i].target,words[i][1]);
				break;
			case FUNCTIONCALL:
				ir[i].instructiontype = FUNCTIONCALL;
				strcpy(ir[i].target,words[i][1]);
				break;
			case RETURN:
				ir[i].instructiontype = RETURN;
				out=get_variable_index(variables,words[i][1],number_of_variables);
				ir[i].out=&(variables[out]);
				break;
			case INPUT:
				ir[i].instructiontype = INPUT;
				out = get_variable_index(variables,words[i][1],number_of_variables);
				ir[i].out = &(variables[out]);
				break;
			case PRINTSTATEMENT:
			//printf("here16\n");
				ir[i].instructiontype = PRINTSTATEMENT;
				in1 = get_variable_index(variables,words[i][1],number_of_variables);
				ir[i].in1 = &(variables[in1]);
				//printf("here17\n");
				break;
			case STORETOARRAY:
				ir[i].instructiontype=STORETOARRAY;
				out=get_variable_index(variables,words[i][1],number_of_variables);
				ir[i].out = &(variables[out]);
				in1=get_variable_index(variables,words[i][2],number_of_variables);
				ir[i].in1 = &(variables[in1]);
				break;
			case LOADFROMARRAY:
				ir[i].instructiontype=LOADFROMARRAY;
				out=get_variable_index(variables,words[i][2],number_of_variables);
				ir[i].out = &(variables[out]);
				in1=get_variable_index(variables,words[i][1],number_of_variables);
				ir[i].in1 = &(variables[in1]);
				break;
			default:
				ir[i].instructiontype=type_of_instruction[i];

		}
	}
	//printf("here15\n");
	//code generation begins
	// for(i=0;i<number_of_lines;i++){
	// 	printf("%d\n", ir[i].instructiontype);
	// }
	FILE* fp1;
	fp1 = fopen("assignment2.asm","w");
	if (fp1 == NULL)
	{
		printf("File does not exist. \n");
		return 0;
	}
	//printf("%d\n",get_register_for_operand(&variables[1],registerdescriptor,&addressdescriptor[1],addressdescriptor,variables, 1, nextusetable));
	
	// Getreg will do everything. It will update the addressdescriptor table, registerdescriptor table and any other tables or value in memory.
	// Also we need to add an extra field like HIGH PRIORITY sth, for making sure that c does not get same register as that of b for a=b+c
	fprintf(fp1,"	.data\n");
	fprintf(fp1,"newline: .asciiz \"\\n\"\n");
	for(i=0;i<number_of_variables;i++){
		if(symboltable[i].type!=TYPE_ARRAY)
			fprintf(fp1,"%s:	.word	0\n", variables[i].name);
		else
			fprintf(fp1,"%s:	.space	%d\n", variables[i].name, symboltable[i].size*4);
	}
	fprintf(fp1,"\n	.text\n	.globl main\n");
	for(i=0;i<number_of_lines;i++){
		int ij;
		for(ij=0;ij<header_count;ij++){
			if(i==0 || i==number_of_lines-1)
				break;
			if(i+1==headers[ij]){
				flushAllRegisters(registerdescriptor, addressdescriptor, number_of_variables, fp1);
			}
		}
		switch (ir[i].instructiontype){
			int var_index_out;
			int reg_index_out;
			int var_index_in1;
			int var_index_in2;
			int reg_index_in1;
			int reg_index_in2;
			int reg_for_word;
			int x,y;
			int flag1;
			case BINARYASSIGNMENT:
				//printf("Here in binary assignment\n");
				//printf("here2\n");
				var_index_out = get_variable_index(variables, ir[i].out->name, number_of_variables);
				reg_index_out = get_register_for_operand(ir[i].out, registerdescriptor, &addressdescriptor[var_index_out], addressdescriptor, variables, i, nextusetable);

				update(var_index_out,reg_index_out,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].out->name,0,0);
				//printf("here4\n");
				if(ir[i].in1==NULL){
					//remember for assignment we can do any of the following:-
					//li $s0,c (for 32bit)
					//ori $s0,$0,c (for 16bit)
					//addi $s0,$0,c
					//let's use li
					//printf("here3\n");
					fprintf(fp1,"	li $s%d,%d\n",reg_index_out,atoi(words[i][2]));
					
				}
				else{
					var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
					reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);

					update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);
					fprintf(fp1,"	move $s%d,$s%d\n",reg_index_out,reg_index_in1);
					
				}
				break;
			case OPERATION:
				//printf("here1\n");
				var_index_out = get_variable_index(variables, ir[i].out->name, number_of_variables);
				reg_index_out = get_register_for_operand(ir[i].out, registerdescriptor, &addressdescriptor[var_index_out], addressdescriptor, variables, i, nextusetable);
				update(var_index_out,reg_index_out,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].out->name,0,0);
				switch(ir[i].operator){
					case ADD:
						//printf("here1\n");
						if(ir[i].in1==NULL && ir[i].in2==NULL){
							//printf("here1\n");
							fprintf(fp1,"	li $s%d,%d\n",reg_index_out,atoi(words[i][2]));
							fprintf(fp1,"	addiu $s%d,$s%d,%d\n",reg_index_out,reg_index_out,atoi(words[i][3]));
							
						}
						else if(ir[i].in1!=NULL && ir[i].in2==NULL){
							//printf("here1\n");
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);
							fprintf(fp1,"	addiu $s%d,$s%d,%d\n",reg_index_out,reg_index_in1,atoi(words[i][3]));
							//printf("here1\n");
						}
						else if(ir[i].in1==NULL && ir[i].in2!=NULL){
							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							fprintf(fp1,"	addiu $s%d,$s%d,%d\n",reg_index_out,reg_index_in2,atoi(words[i][2]));
							
						}
						else{
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);

							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							
							fprintf(fp1,"	addu $s%d,$s%d,$s%d\n",reg_index_out,reg_index_in1,reg_index_in2);
							
						}
						break;
					case SUBTRACT:
						if(ir[i].in1==NULL && ir[i].in2==NULL){
							reg_for_word = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							//keeping varIndex = -1 as it will not be used.
							update(-1,reg_for_word,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][3],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_for_word,atoi(words[i][3]));
							fprintf(fp1,"	li $s%d,%d\n",reg_index_out,atoi(words[i][2]));
							fprintf(fp1,"	subu $s%d,$s%d,$s%d\n",reg_index_out,reg_index_out,reg_for_word);
							return_update_for_word(registerdescriptor,reg_for_word);
							
						}
						else if(ir[i].in1!=NULL && ir[i].in2==NULL){
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_out,atoi(words[i][3]));
							fprintf(fp1,"	subu $s%d,$s%d,$s%d\n",reg_index_out,reg_index_in1,reg_index_out);
							
						}
						else if(ir[i].in1==NULL && ir[i].in2!=NULL){
							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_out,atoi(words[i][2]));
							fprintf(fp1,"	subu $s%d,$s%d,$s%d\n",reg_index_out,reg_index_out,reg_index_in2);
							
						}
						else{
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);

							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);

							fprintf(fp1,"	subu $s%d,$s%d,$s%d\n",reg_index_out,reg_index_in1,reg_index_in2);
							
						}
						break;
					case MULTIPLY:
						if(ir[i].in1==NULL && ir[i].in2==NULL){
							//though we support the multiplication of two constants it is not recommended, as this causes more number of instructions and loading from and storing into the memory.
							reg_for_word = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							//keeping varIndex = -1 as it will not be used.
							update(-1,reg_for_word,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][3],1,1);
							fprintf(fp1,"	ori $s%d,$0,%d\n",reg_for_word,atoi(words[i][3]));
							fprintf(fp1,"	ori $s%d,$0,%d\n",reg_index_out,atoi(words[i][2]));
							fprintf(fp1,"	multu $s%d,$s%d\n",reg_index_out,reg_for_word);
							fprintf(fp1,"	mflo $s%d\n",reg_index_out);
							return_update_for_word(registerdescriptor,reg_for_word);
							
						}
						else if(ir[i].in1!=NULL && ir[i].in2==NULL){
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);
							fprintf(fp1,"	ori $s%d,$0,%d\n",reg_index_out,atoi(words[i][3]));
							fprintf(fp1,"	multu $s%d,$s%d\n",reg_index_out,reg_index_in1);
							fprintf(fp1,"	mflo $s%d\n",reg_index_out);
							
						}
						else if(ir[i].in1==NULL && ir[i].in2!=NULL){
							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							fprintf(fp1,"	ori $s%d,$0,%d\n",reg_index_out,atoi(words[i][2]));
							fprintf(fp1,"	multu $s%d,$s%d\n",reg_index_out,reg_index_in2);
							fprintf(fp1,"	mflo $s%d\n",reg_index_out);
							
						}
						else{
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);

							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							fprintf(fp1,"	multu $s%d,$s%d\n",reg_index_in1,reg_index_in2);
							fprintf(fp1,"	mflo $s%d\n",reg_index_out);
							
						}
						break;
					case DIVIDE:
						if(ir[i].in1==NULL && ir[i].in2==NULL){
							reg_for_word = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							//keeping varIndex = -1 as it will not be used.
							update(-1,reg_for_word,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][3],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_for_word,atoi(words[i][3]));
							fprintf(fp1,"	li $s%d,%d\n",reg_index_out,atoi(words[i][2]));
							fprintf(fp1,"	divu $s%d,$s%d\n",reg_index_out,reg_for_word);
							fprintf(fp1,"	mflo $s%d\n",reg_index_out);
							return_update_for_word(registerdescriptor,reg_for_word);
							
						}
						else if(ir[i].in1!=NULL && ir[i].in2==NULL){
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_out,atoi(words[i][3]));
							fprintf(fp1,"	divu $s%d,$s%d\n",reg_index_out,reg_index_in1);
							fprintf(fp1,"	mflo $s%d\n",reg_index_out);
							
						}
						else if(ir[i].in1==NULL && ir[i].in2!=NULL){
							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_out,atoi(words[i][2]));
							fprintf(fp1,"	divu $s%d,$s%d\n",reg_index_out,reg_index_in2);
							fprintf(fp1,"	mflo $s%d\n",reg_index_out);
							
						}
						else{
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);

							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							fprintf(fp1,"	divu $s%d,$s%d\n",reg_index_in1,reg_index_in2);
							fprintf(fp1,"	mflo $s%d\n",reg_index_out);
							
						}
						break;
					case MODULUS:
						if(ir[i].in1==NULL && ir[i].in2==NULL){
							reg_for_word = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							//keeping varIndex = -1 as it will not be used.
							update(-1,reg_for_word,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][3],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_for_word,atoi(words[i][3]));
							fprintf(fp1,"	li $s%d,%d\n",reg_index_out,atoi(words[i][2]));
							fprintf(fp1,"	divu $s%d,$s%d\n",reg_index_out,reg_for_word);
							fprintf(fp1,"	mfhi $s%d\n",reg_index_out);
							return_update_for_word(registerdescriptor,reg_for_word);
							
						}
						else if(ir[i].in1!=NULL && ir[i].in2==NULL){
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_out,atoi(words[i][3]));
							fprintf(fp1,"	divu $s%d,$s%d\n",reg_index_out,reg_index_in1);
							fprintf(fp1,"	mfhi $s%d\n",reg_index_out);
							
						}
						else if(ir[i].in1==NULL && ir[i].in2!=NULL){
							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_out,atoi(words[i][2]));
							fprintf(fp1,"	divu $s%d,$s%d\n",reg_index_out,reg_index_in2);
							fprintf(fp1,"	mfhi $s%d\n",reg_index_out);
							
						}
						else{
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);

							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							fprintf(fp1,"	divu $s%d,$s%d\n",reg_index_in1,reg_index_in2);
							fprintf(fp1,"	mfhi $s%d\n",reg_index_out);
							
						}
						break;
					case AND:
						if(ir[i].in1==NULL && ir[i].in2==NULL){
							fprintf(fp1,"	li $s%d,%d\n",reg_index_out,atoi(words[i][2]));
							fprintf(fp1,"	andi $s%d,$s%d,%d\n",reg_index_out,reg_index_out,atoi(words[i][3]));
							
						}
						else if(ir[i].in1!=NULL && ir[i].in2==NULL){
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);
							fprintf(fp1,"	andi $s%d,$s%d,%d\n",reg_index_out,reg_index_in1,atoi(words[i][3]));
							
						}
						else if(ir[i].in1==NULL && ir[i].in2!=NULL){
							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							fprintf(fp1,"	andi $s%d,$s%d,%d\n",reg_index_out,reg_index_in2,atoi(words[i][2]));
							
						}
						else{
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);

							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							
							fprintf(fp1,"	and $s%d,$s%d,$s%d\n",reg_index_out,reg_index_in1,reg_index_in2);
							
						}
						break;
					case OR:
						if(ir[i].in1==NULL && ir[i].in2==NULL){
							fprintf(fp1,"	li $s%d,%d\n",reg_index_out,atoi(words[i][2]));
							fprintf(fp1,"	xori $s%d,$s%d,%d\n",reg_index_out,reg_index_out,atoi(words[i][3]));
							
						}
						else if(ir[i].in1!=NULL && ir[i].in2==NULL){
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);
							fprintf(fp1,"	xori $s%d,$s%d,%d\n",reg_index_out,reg_index_in1,atoi(words[i][3]));
							
						}
						else if(ir[i].in1==NULL && ir[i].in2!=NULL){
							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							fprintf(fp1,"	xori $s%d,$s%d,%d\n",reg_index_out,reg_index_in2,atoi(words[i][2]));
							
						}
						else{
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);

							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							
							fprintf(fp1,"	xor $s%d,$s%d,$s%d\n",reg_index_out,reg_index_in1,reg_index_in2);
							
						}
						break;
				}
				break;
			case GOTO:
				fprintf(fp1,"	j %s\n",ir[i].target);
				//no-op instruction
				fprintf(fp1,"	sll $0,$0,0\n");
				break;
			case IFGOTO:
				switch(ir[i].operator){
					case EQEQ:
						if(ir[i].in1==NULL && ir[i].in2==NULL){
							reg_index_in1 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][2],1,1);
							reg_index_in2 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][3],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in1,atoi(words[i][2]));
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in2,atoi(words[i][3]));
							fprintf(fp1,"	beq $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							return_update_for_word(registerdescriptor,reg_index_in1);
							return_update_for_word(registerdescriptor,reg_index_in2);
							
						}
						else if(ir[i].in1!=NULL && ir[i].in2==NULL){
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);
							reg_index_in2 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][3],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in2,atoi(words[i][3]));
							fprintf(fp1,"	beq $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							return_update_for_word(registerdescriptor,reg_index_in2);
							
						}
						else if(ir[i].in1==NULL && ir[i].in2!=NULL){
							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							reg_index_in1 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][2],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in1,atoi(words[i][2]));
							fprintf(fp1,"	beq $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							return_update_for_word(registerdescriptor,reg_index_in1);
							
						}
						else{
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);

							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							fprintf(fp1,"	beq $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							
						}
						break;
					case NOTEQ:
						if(ir[i].in1==NULL && ir[i].in2==NULL){
							reg_index_in1 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][2],1,1);
							reg_index_in2 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][3],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in1,atoi(words[i][2]));
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in2,atoi(words[i][3]));
							fprintf(fp1,"	bne $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							return_update_for_word(registerdescriptor,reg_index_in1);
							return_update_for_word(registerdescriptor,reg_index_in2);
							
						}
						else if(ir[i].in1!=NULL && ir[i].in2==NULL){
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);
							reg_index_in2 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][3],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in2,atoi(words[i][3]));
							fprintf(fp1,"	bne $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							return_update_for_word(registerdescriptor,reg_index_in2);
							
						}
						else if(ir[i].in1==NULL && ir[i].in2!=NULL){
							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							reg_index_in1 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][2],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in1,atoi(words[i][2]));
							fprintf(fp1,"	bne $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							return_update_for_word(registerdescriptor,reg_index_in1);
							
						}
						else{
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);

							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							fprintf(fp1,"	bne $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							
						}
						break;
					case LEQ:
						if(ir[i].in1==NULL && ir[i].in2==NULL){
							reg_index_in1 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][2],1,1);
							reg_index_in2 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][3],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in1,atoi(words[i][2]));
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in2,atoi(words[i][3]));
							fprintf(fp1,"	ble $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							return_update_for_word(registerdescriptor,reg_index_in1);
							return_update_for_word(registerdescriptor,reg_index_in2);
							
						}
						else if(ir[i].in1!=NULL && ir[i].in2==NULL){
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);
							reg_index_in2 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][3],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in2,atoi(words[i][3]));
							fprintf(fp1,"	ble $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							return_update_for_word(registerdescriptor,reg_index_in2);
							
						}
						else if(ir[i].in1==NULL && ir[i].in2!=NULL){
							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							reg_index_in1 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][2],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in1,atoi(words[i][2]));
							fprintf(fp1,"	ble $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							return_update_for_word(registerdescriptor,reg_index_in1);
							
						}
						else{
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);

							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							fprintf(fp1,"	ble $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							
						}
						break;
					case GEQ:
						if(ir[i].in1==NULL && ir[i].in2==NULL){
							reg_index_in1 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][2],1,1);
							reg_index_in2 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][3],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in1,atoi(words[i][2]));
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in2,atoi(words[i][3]));
							fprintf(fp1,"	bge $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							return_update_for_word(registerdescriptor,reg_index_in1);
							return_update_for_word(registerdescriptor,reg_index_in2);
							
						}
						else if(ir[i].in1!=NULL && ir[i].in2==NULL){
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);
							reg_index_in2 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][3],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in2,atoi(words[i][3]));
							fprintf(fp1,"	bge $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							return_update_for_word(registerdescriptor,reg_index_in2);
							
						}
						else if(ir[i].in1==NULL && ir[i].in2!=NULL){
							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							reg_index_in1 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][2],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in1,atoi(words[i][2]));
							fprintf(fp1,"	bge $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							return_update_for_word(registerdescriptor,reg_index_in1);
							
						}
						else{
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);

							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							fprintf(fp1,"	bge $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							
						}
						break;
					case LT:
						if(ir[i].in1==NULL && ir[i].in2==NULL){
							reg_index_in1 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][2],1,1);
							reg_index_in2 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][3],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in1,atoi(words[i][2]));
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in2,atoi(words[i][3]));
							fprintf(fp1,"	blt $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							return_update_for_word(registerdescriptor,reg_index_in1);
							return_update_for_word(registerdescriptor,reg_index_in2);
							
						}
						else if(ir[i].in1!=NULL && ir[i].in2==NULL){
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);
							reg_index_in2 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][3],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in2,atoi(words[i][3]));
							fprintf(fp1,"	blt $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							return_update_for_word(registerdescriptor,reg_index_in2);
							
						}
						else if(ir[i].in1==NULL && ir[i].in2!=NULL){
							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							reg_index_in1 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][2],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in1,atoi(words[i][2]));
							fprintf(fp1,"	blt $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							return_update_for_word(registerdescriptor,reg_index_in1);
							
						}
						else{
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);

							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							fprintf(fp1,"	blt $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							
						}
						break;
					case GT:
						if(ir[i].in1==NULL && ir[i].in2==NULL){
							reg_index_in1 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][2],1,1);
							reg_index_in2 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][3],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in1,atoi(words[i][2]));
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in2,atoi(words[i][3]));
							fprintf(fp1,"	bgt $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							return_update_for_word(registerdescriptor,reg_index_in1);
							return_update_for_word(registerdescriptor,reg_index_in2);
							
						}
						else if(ir[i].in1!=NULL && ir[i].in2==NULL){
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);
							reg_index_in2 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][3],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in2,atoi(words[i][3]));
							fprintf(fp1,"	bgt $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							return_update_for_word(registerdescriptor,reg_index_in2);
						}
						else if(ir[i].in1==NULL && ir[i].in2!=NULL){
							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							reg_index_in1 = get_register_for_word(registerdescriptor,addressdescriptor,i,nextusetable);
							update(-1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,words[i][2],1,1);
							fprintf(fp1,"	li $s%d,%d\n",reg_index_in1,atoi(words[i][2]));
							fprintf(fp1,"	bgt $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
							return_update_for_word(registerdescriptor,reg_index_in1);
						}
						else{
							var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
							reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
							update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);

							var_index_in2 = get_variable_index(variables, ir[i].in2->name, number_of_variables);
							reg_index_in2 = get_register_for_operand(ir[i].in2, registerdescriptor, &addressdescriptor[var_index_in2], addressdescriptor, variables, i, nextusetable);
							update(var_index_in2,reg_index_in2,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in2->name,1,0);
							fprintf(fp1,"	bgt $s%d,$s%d,%s\n",reg_index_in1,reg_index_in2,ir[i].target);
							fprintf(fp1,"	sll $0,$0,0\n");
						}
						break;
				}
				break;
			case LABEL:
				fprintf(fp1,"\n%s:\n",words[i][1]);
				break;
			case INPUT:
				fprintf(fp1,"	li $v0,5\n");
				fprintf(fp1,"	syscall\n");
				var_index_out=get_variable_index(variables, ir[i].out->name, number_of_variables);
				reg_index_out=get_register_for_operand(ir[i].out, registerdescriptor, &addressdescriptor[var_index_out], addressdescriptor, variables, i, nextusetable);
				//printf("Yahan sahi hai\n");
				//printf("%d\t%d\n",var_index_out,reg_index_out);
				update(var_index_out,reg_index_out,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].out->name,0,0);
				fprintf(fp1,"	move $s%d,$v0\n", reg_index_out);
				fprintf(fp1,"	sw $v0,%s\n", ir[i].out->name);
				addressdescriptor[var_index_out].location[32]=PRESENT;
				break;
			case FUNCTIONDECLARATION:
				if(flagforending==0){
					fprintf(fp1,"	li $v0,10\n");
					fprintf(fp1,"	syscall\n" );
					flagforending=1;
				}
				fprintf(fp1,"\n%s:\n",words[i][1]);
				fprintf(fp1,"	subu $sp, $sp, 4\n");
				fprintf(fp1,"	sw $ra, ($sp)\n");
				break;
			case FUNCTIONCALL:
				fprintf(fp1,"	jal %s\n",ir[i].target);
				fprintf(fp1,"	sll $0,$0,0\n");
				break;
			case RETURN:
				var_index_out=get_variable_index(variables, ir[i].out->name, number_of_variables);
				reg_index_out=get_register_for_operand(ir[i].out, registerdescriptor, &addressdescriptor[var_index_out], addressdescriptor, variables, i, nextusetable);
				update(var_index_out,reg_index_out,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].out->name,0,0);
				fprintf(fp1,"	move $v0, $s%d\n",reg_index_out);
				fprintf(fp1,"	lw $ra, ($sp)\n");
				fprintf(fp1,"	addiu $sp, $sp, 4\n");
				fprintf(fp1,"	jr $ra\n");
				break;
			// only variables will be printed with a newline.
			case PRINTSTATEMENT:
				var_index_in1 = get_variable_index(variables, ir[i].in1->name, number_of_variables);
				reg_index_in1 = get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
				update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,1,0);
				fprintf(fp1,"	li $v0,1\n");
				// move since registers are being made equal.
				fprintf(fp1,"	move $a0,$s%d\n",reg_index_in1);
				fprintf(fp1,"	syscall\n\n");
				//$v0=4 to print a string.
				fprintf(fp1,"	li $v0,4\n");
				// la to assign a0 the address of newline.
				fprintf(fp1,"	la $a0,newline\n");
				fprintf(fp1,"	syscall\n\n");
				break;
			case STORETOARRAY:
				var_index_in1=get_variable_index(variables, ir[i].in1->name, number_of_variables);
				reg_index_in1=get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
				update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,0,0);
				var_index_out=get_variable_index(variables, ir[i].out->name, number_of_variables);
				reg_index_out=get_register_for_operand(ir[i].out, registerdescriptor, &addressdescriptor[var_index_out], addressdescriptor, variables, i, nextusetable);
				update(var_index_out,reg_index_out,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].out->name,0,0);
				fprintf(fp1,"	la $s%d,%s\n",reg_index_in1,words[i][2]);
				fprintf(fp1,"	sw $s%d,%d($s%d)\n",reg_index_out,atoi(words[i][3])*4,reg_index_in1);
				break;
			case LOADFROMARRAY:
				var_index_out=get_variable_index(variables, ir[i].out->name, number_of_variables);
				reg_index_out=get_register_for_operand(ir[i].out, registerdescriptor, &addressdescriptor[var_index_out], addressdescriptor, variables, i, nextusetable);
				update(var_index_out,reg_index_out,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].out->name,0,0);
				var_index_in1=get_variable_index(variables, ir[i].in1->name, number_of_variables);
				reg_index_in1=get_register_for_operand(ir[i].in1, registerdescriptor, &addressdescriptor[var_index_in1], addressdescriptor, variables, i, nextusetable);
				update(var_index_in1,reg_index_in1,registerdescriptor,addressdescriptor,number_of_variables,fp1,ir[i].in1->name,0,0);
				fprintf(fp1,"	la $s%d,%s\n",reg_index_out,words[i][2]);
				fprintf(fp1,"	lw $s%d,%d($s%d)\n",reg_index_in1,atoi(words[i][3])*4,reg_index_out);
				break;
			default:
				break;
		}
	}
	if(flagforending==0){
		fprintf(fp1,"	li $v0,10\n");
		fprintf(fp1,"	syscall\n" );
		flagforending=1;
	}

	fprintf(fp1,"\n");
	fclose(fp1);
	fp1=fopen("assignment2.asm","r");
	for(c=getc(fp1); c!=EOF; c= getc(fp1)){
		printf("%c",c);
	}
	fclose(fp1);
	//printf("Here\n");
	

	return 0;
}