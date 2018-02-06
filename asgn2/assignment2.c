#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIVE 1
#define DEAD 2

#define BINARYASSIGNMENT    1
#define OPERATION 	    2
#define GOTO	 	    3
#define IFGOTO	  	    4
#define FUNCTIONDECLARATION 5
#define FUNCTIONCALL	    6
#define RETURN 		    7
#define PRINTSTATEMENT	    8
#define ERROR		    9

typedef struct variable_list {
	char name[10];
	int status;
	int nextuse;
} VL;

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

int main(int argc, char** argv){
        //count the number of lines in the file
        FILE* fp;
        FILE*  copy_of_fp;
        if (argc >= 2){
                fp = fopen(argv[1], "r");
                copy_of_fp = fopen (argv[1], "r");
        }
        int number_of_lines=0;
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

        int i;
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

	//preprocessing has been done. Moving on to find headers.
	int headers[number_of_lines];
	int header_count = 1;
	headers[0]=0;
	int j;
	/*for(i=0;i<number_of_lines;i++){
                for(j=0;j<number_of_words[i];j++){
                        printf("%s\n", words[i][j]);
                }
        }*/
	for(i=0;i<number_of_lines;i++){
		if(strcmp(words[i][0],"goto")!=0 && strcmp(words[i][0],"ifgoto")!=0){
			continue;
		}
		else{
			headers[header_count++]=i+1;
			if(strcmp(words[i][0],"goto")==0)
				headers[header_count++]=atoi(words[i][1]);
			else
				headers[header_count++]=atoi(words[i][4]);
	 	}
	}
	//all header lines have now been captured
	for(i=0;i<number_of_lines;i++){
		for(j=0;j<number_of_words[i];j++){
			printf("%s\n", words[i][j]);
		}
	}
	for(i=0;i<header_count;i++)
		printf("%d\n",headers[i]);

	//moving on to the next part of variable listing.
	VL variables[number_of_lines];
	int number_of_variables=0;
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
	for(i=0;i<number_of_variables;i++)
		printf("%s\t",variables[i].name);
	printf("\n");
	//variables are now being recognized. 
	//printf("variable 2 = %s and variable 10 = %s",variables[2].name, variables[10].name);
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
		printf("%d\n",type_of_instruction[i]);

	//type of instructions are now being identified. Now we need to generate the next use table.
        return 0;
}

