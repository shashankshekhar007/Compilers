#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct each_line_of_file {
	char line[100];
} lines_of_a_file;

int main(int argc, char* argv[]){
	FILE* fp;
	FILE*  copy_of_fp;
	if (argc ==1){
		FILE* fp;
		fp = fopen(argv[0], "r");
		copy_of_fp = fopen (argv[0], "r");
	}
	int number_of_lines=0;
	if(fp == "NULL")
		printf("Couldn't find the desired file\n");
	char c;
	for(c=getc(fp); c!=EOF; c= getc(fp)){
		if(c=='\n')
			number_of_lines++;
		fclose(fp);
	}
	lines_of_a_file lines[number_of_lines];
	printf("Number of lines = %d", number_of_lines); 
	return 0;
}
