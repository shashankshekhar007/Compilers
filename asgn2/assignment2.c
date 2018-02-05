#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIVE 1
#define DEAD 2

typedef struct variable_list {
	char name[10];
	int status;
	int nextuse;
} VL;

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
            char c;
            while (j!=strlen(lines[i-1])){
                c=lines[i-1][j];
                if(c==','){
                    number_of_words[i-1]++;
		    j++;
		    k++;
                    l=0;
		    printf("%s\t",words[i-1][k-1]);
		    continue;
		}
		words[i-1][k][l]=c;
		l++;
		j++;	
            }
            number_of_words[i-1]++;
            printf("%d %s", number_of_words[i-1], lines[i-1]);
    	}

	//preprocessing has been done. Now move on to the next part, i.e., identifying the type of sentence and symbol tables.
	int headers[number_of_lines];
	int header_count = 1;
	headers[0]=0;
	int j;
	for(i=0;i<number_of_lines;i++){
                for(j=0;j<number_of_words[i];j++){
                        printf("%s\n", words[i][j]);
                }
        }
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
	for(i=0;i<=header_count;i++)
		printf("%d\n",headers[i]);
        return 0;
}
