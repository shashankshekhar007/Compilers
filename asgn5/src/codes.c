#include <stdio.h> 
#include <stdlib.h> 
#include <stdarg.h> 
#include <string.h>
#include "tac.h"
#include "nodes.h"


char buffer[100]="";
int i=0;
char * str(int num) {
    strcpy(buffer, "");
    if (num == 0) {
        buffer[0] = '0';
        buffer[1] = '\0';
        return buffer;
    }
    if (num > 0) {
        int i, rem, len = 0, n;
        n = num;
        while (n != 0) {
            len++;
            n /= 10;
        }
        for (i = 0; i < len; i++) {
            rem = num % 10;
            num = num / 10;
            buffer[len - (i + 1)] = rem + '0';
        }
        buffer[len] = '\0';
        return buffer;
    } else {
        num = -num;

        int i, rem, len = 0, n;
        n = num;
        while (n != 0) {
            len++;
            n /= 10;
        }
        len++;
        buffer[0] = '-';
        for (i = 1; i < len; i++) {
            rem = num % 10;
            num = num / 10;
            buffer[len - (i)] = rem + '0';
        }
        buffer[len] = '\0';
        return buffer;

    }
}


struct symtable* global_head=NULL;

void enter (struct symtable* table,char* name,char* type,int offset){
	//printf("entered insert\n");
	struct symtable_entry *new=malloc(sizeof(struct symtable_entry));
	//printf("DEBUG: inside enter: new symbol entry created\n");
	new->name=malloc(sizeof(char)*strlen(name));
	strcpy(new->name,name);
	strcpy(new->type,type);
	//printf("DEBUG: inside enter: new symbol entry name given\n");
//	printf("DEBUG: inside enter: new symbol entry type given. printing name and type here name-%s, type-%s\n",new->name,new->type);

	new->next=NULL;
	new->fn=NULL;
//	printf("DEBUG: inside enter: new symbol entry next = NULL and its fn = NULL\n");

    if( table->head == NULL ) {
  //  	    		printf("DEBUG: inside enter:if the table(top()) head is NULL\n");

	i++;
	//		printf("DEBUG: inside enter: Printing the value of number of symbol entries in the table %d\n",i);

	table->head=new;table->tail=new;}
	else {
	//	printf("DEBUG: inside enter:if the table(top()) head is _NOT_ NULL\n");
		table->tail->next=new;
	table->tail=new;
	//printf("DEBUG: inside enter:we made table->tail->next=new and then table->tail=new\n");
	}
	if(i==1){
	global_head=table;
	//printf("DEBUG: we definitely came here\n");
}
	//printf("DEBUG: inside enter: exiting the enterproc\n");
	//printf("DEBUG: global_head->head->name = %s\n",global_head->tail->name);

} 

struct symtable* mktable(struct symtable_entry* previous)
{
	struct symtable *new=malloc(sizeof(struct symtable));
	new->head=NULL;
	new->tail=NULL;
	previous->fn=new;
	return new;
}

void enterproc(struct symtable* table, char* name,struct symtable* newtable)
{
	//printf("entered insert for proc\n");
	struct symtable_entry *new=malloc(sizeof(struct symtable_entry));
	//printf("DEBUG: inside enterproc: new symbol entry created\n");
	new->name=malloc(sizeof(char)*strlen(name));
	//printf("DEBUG: inside enterproc: new symbol entry name given\n");
	strcpy(new->name,name);
	strcpy(new->type,"proc");
	//printf("DEBUG: inside enterproc: new symbol entry type given. printing name and type here name-%s, type-%s\n",new->name,new->type);
	new->next=NULL;
	new->fn=newtable;
	//printf("DEBUG: inside enterproc: new symbol entry next = NULL and its fn = newtable or t here\n");
    if( table->head == NULL ) {
    //		printf("DEBUG: inside enterproc: checking if the table(top()) head is NULL or not\n");
	i++;
		//printf("DEBUG: inside enterproc: Printing the value of number of symbol entries in the table %d\n",i);
	table->head=new;table->tail=new;}
	else {
		//printf("DEBUG: inside enterproc:if the table(top()) head is _NOT_ NULL\n");
		table->tail->next=new;
	table->tail=new;
		//printf("DEBUG: inside enter:we made table->tail->next=new and then table->tail=new\n");

	}
	if(i==1)
	global_head=table;
	//printf("DEBUG: inside enterproc: exiting the enterproc\n");
}
void delete (struct symtable* table,char * var){
	//printf("DEBUG: entered delete\n");
	struct symtable_entry* iterator=table->head;
	if(!strcmp(var,table->head->name)){
		struct symtable_entry* temp=table->head->next;
		free(table->head->name);
		free(table->head);

		table->head=temp;

	}
	else {


		while( strcmp(var,iterator->next->name) && iterator!=table->tail ) 
			iterator=iterator->next;

		struct symtable_entry* temp=iterator->next;

		if(iterator->next == table->tail ){
			table->tail=iterator;}


		iterator->next=temp->next;
		free(temp->name);
		free(temp);
	}



}


struct symtable_entry* lookup (struct symtable* table,char * var){
	//printf("DEBUG: entered lookup for %s\n",var);
	struct symtable_entry* iterator=table->head;
	if (table->head==NULL){ 
		return NULL;
	}
	while(iterator!=NULL) { if (!strcmp(var,iterator->name))break;iterator=iterator->next; }
	if (iterator!=NULL) 
	if(!strcmp(var,iterator->name)){ 
			return iterator;
		}
	iterator=global_head->head;
	if (table->head==NULL) {
		//printf("null\n");
		return NULL;
	}
	while(iterator!=NULL) { if (!strcmp(var,iterator->name))break; iterator=iterator->next; }
	if (iterator==NULL) {		
return NULL;}
	if(!strcmp(var,iterator->name)) {
			

		return iterator;
	}
}

struct symtable_entry* isDefined(struct symtable* table,char *name, char* type){
	//printf("DEBUG: entered isDefined for %s\n",name);
	struct symtable_entry* iterator=table->head;
	if (table->head==NULL) return NULL;
	while(iterator!=NULL) {
		if (!strcmp(type,iterator->name)&&!strcmp(type,iterator->type))
			break;
		iterator=iterator->next; 
	}
	if (iterator!=NULL){
		if(!strcmp(name,iterator->name)&&!strcmp(type,iterator->type)) 
			return iterator;
	}
	iterator=global_head->head;
	if (table->head==NULL) {//printf("null");
	return NULL;}
	while(iterator!=NULL) {
		if (!strcmp(type,iterator->name)&&!strcmp(type,iterator->type))
			break;
		//printf("hello");
		iterator=iterator->next;
	}
	if (iterator==NULL) return NULL;
	if(!strcmp(name,iterator->name)&&!strcmp(type,iterator->type)) 
		return iterator;
}
/*char buffer[100]="";



char* gen(char *op,char *x,char *y){
	printf("entered gen\n");
	static int nl=0;
	nl++;
	strcpy(buffer,"");
	strcat(buffer,str(nl));
	strcat(buffer,",");
	strcat(buffer,op);
	strcat(buffer,",");
	strcat(buffer,x);
	if(y!=NULL) strcat(buffer,",");
	strcat(buffer,y);
	//if(z!=NULL) strcat(buffer,",");
	//strcat(buffer,z);
	strcat(buffer,"\n");
	return buffer;
}*/

char temp[10]="";

char* newtmp(){
	static int count=0;
	count++;
	strcpy(temp,"");
	strcat(temp,"t");
	strcat(temp,str(count));
	return temp;
}

char* newlabel(){
	static int count=0;
	count++;
	strcpy(temp,"");
	strcat(temp,"L");
	strcat(temp,str(count));
	return temp;
}

extern int nl;

TAC* rev (){
	//printf("entered rev\n");
	TAC* current=list->next;
	TAC* prev=NULL;
	TAC* next=NULL;
	while (current != NULL){
		//printf("hello");
       		next  = current->next;  
        	current->next = prev;   
        	prev = current;
        	current = next;
        }
	//printf("exited rev\n");	
	return prev;
}

TAC* iterator=NULL;

void push_to_rev(TAC* node){
	//printf("entered push\n");
	static int flag=0;
	if(flag==0) iterator=list;
	flag++;
	iterator->next=node;
	node->next=NULL;
	iterator=iterator->next;
	return;
}
 
 

TAC* gen (char *t){
	//printf("entered gen\n");
	nl++;
	TAC *node=malloc(sizeof(TAC));
	node->next=NULL;
	//strcpy(node->text,"");
	//strcat(node->text,str(nl));
	//strcat(node->text,",");
	strcat(node->text,t);
	//printf("exited gen\n");
	return node;
}

TAC* append(TAC* a, TAC* b){
	//printf("entered append\n");
	TAC *iterator=a;
	if (iterator == NULL ) {a=b;return a;}
	while (iterator->next!=NULL) iterator=iterator->next;
	iterator->next=b;
	//printf("exited append\n");
	return a;
}

int size (VarAttr *a)
{
int m;
TAC* iterator =a->code;
while(iterator!=NULL)
{
iterator=iterator->next;
m++;
}
}

 void printcode (TAC* a){
 	//printf("---------------------------------\n");int i=1;
	TAC* iterator=a;
	while(iterator!=NULL){
		printf("%s\n",iterator->text );
		iterator=iterator->next;
	}
	//printf("---------------------------------\n");
	return;
}
void printsymtable(struct symtable* table){
	struct symtable_entry *iterator=table->head;
	//printf("printing symbol table\n--------------------------\n");
	while(iterator!=NULL){
		printf("%s,%s\n",iterator->name,iterator->type);
		if(iterator->fn)
		{
	//		printf("NEW TABLE\n");			
			printsymtable(iterator->fn);
		}
		iterator=iterator->next;
	}
	//printf("--------------------------\n");
	return;
}
