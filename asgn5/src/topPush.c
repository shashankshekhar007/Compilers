#include <stdio.h>
#include <stdlib.h>
#include "tac.h"
#include "nodes.h"

int ii=0;
sym_table *Global;

sym_table* array[100];

 
void push(sym_table* func){
	//printf("DEBUG: printing the value of ii first time in push- %d\n",ii);
	ii++;
	if(ii==99) ii=0;
	array[ii]=func;
	//printf("DEBUG: printing the value of ii second time in push- %d\n",ii);
	return;
}
sym_table* top(){
	//printf("DEBUG: printing the value of ii in top(remember this was the one that fucked everything)- %d\n",ii);
	return array[ii];
}
sym_table* pop(){
	ii--;if(ii==-1) ii=99;return array[ii];
}

