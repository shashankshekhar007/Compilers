#include <stdio.h>
#include <stdlib.h>
#include "tac.h"
#include "nodes.h"

int ii=0;
sym_table *Global;

sym_table* array[100];

 
void push(sym_table* func){
	ii++;if(ii==99) ii=0;array[ii]=func;return;
}
sym_table* top(){
	return array[ii];
}
sym_table* pop(){
	ii--;if(ii==-1) ii=99;return array[ii];
}

