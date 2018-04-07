#include <stdio.h> 
#include <stdlib.h> 
#include <stdarg.h> 
#include <string.h>
#include "tac.h"
#include "nodes.h"


char buffer[100]="";

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

struct symtable_entry
{
	//int size ;
	//int status ;
	char type[20];
};

struct symtable {
	char* name;
	struct symtable_entry* data;
	struct symtable *next;
};

struct symtable* tail=NULL;
struct symtable* head=NULL;

struct symtable_entry* insert (char* var, char* token){
	printf("entered insert\n");
	struct symtable *new=malloc(sizeof(struct symtable));
	new->name=malloc(sizeof(char)*strlen(var));
	strcpy(new->name,var);
	new->data=malloc(sizeof(struct symtable_entry));
	strcpy(new->data->type,token);
	new->next=NULL;


    if( head == NULL ) {head=new;tail=head;}
	else {tail->next=new;
	tail=new;}

	return new->data;
}


void delete (char * var){
	printf("entered delete\n");
	struct symtable* iterator=head;
	if(!strcmp(var,head->name)){
		struct symtable* temp=head->next;
		free(head->data);
		free(head->name);
		free(head);

		head=temp;

	}
	else {


		while( strcmp(var,iterator->next->name) && iterator!=tail ) 
			iterator=iterator->next;

		struct symtable* temp=iterator->next;

		if(iterator->next == tail ){printf("done\n");
			tail=iterator;}


		iterator->next=temp->next;
		free(temp->data);
		free(temp->name);
		free(temp);
	}



}


struct symtable_entry* lookup (char * var){
	printf("entered lookup for %s\n",var);
	struct symtable* iterator=head;
	if (head==NULL) return NULL;
	while(iterator!=NULL) { if (!strcmp(var,iterator->name))break;printf("hello"); iterator=iterator->next; }
	if (iterator==NULL) return NULL;
	if(!strcmp(var,iterator->name)) 
		return iterator->data;
	else return NULL;

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
	printf("entered rev\n");
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
	printf("exited rev\n");	
	return prev;
}

TAC* iterator=NULL;

void push(TAC* node){
	printf("entered push\n");
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
	strcpy(node->text,"");
	strcat(node->text,str(nl));
	strcat(node->text,",");
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

int size (Attr *a)
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
 	printf("---------------------------------\n");
	TAC* iterator=a;
	while(iterator!=NULL){
		printf("%s\n",iterator->text );
		iterator=iterator->next;
	}
	printf("---------------------------------\n");
	return;
}
void printsymtable(){
	struct symtable *iterator=head;
	printf("printing symbol table\n--------------------------\n");
	while(iterator!=NULL){
		printf("%s,%s\n",iterator->name,iterator->data->type);
		iterator=iterator->next;
	}
	printf("--------------------------\n");
	return;
}

