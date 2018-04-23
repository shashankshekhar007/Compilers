typedef struct {
	char text[100];
} string;



typedef struct {
	char place[100];
	TAC *code;
} Attr;

typedef struct {
	char place[100];
	char place2[100];
	TAC *code;
	char type[16];
	char type1[16];
	char type2[16];
} VarAttr;

typedef struct {
	char place[100];
	TAC *code;
	char op[5];
} OpAttr;

typedef struct {
	char place[100];
	TAC *code;
	char begin[10];
	char after[10];
}Codn;
typedef struct {
	char place[100];
	TAC *code;
	char Else[10];
	char after[10];
}Elif;
typedef struct symtable_entry
{
	//int size ;
	//int status ;
	char* name;
	char type[20];
	//char type1[20]
	struct symtable_entry *next;
	struct symtable *fn;
}symtable_ent;

typedef struct symtable {
	struct symtable_entry* tail;
	struct symtable_entry* head;
}sym_table;

typedef struct {
	char place[100];
	TAC *code;
	char type[100];
} Trailer;
TAC* gen (char *t);
void printsymtable();
struct symtable_entry* insert (char* var, char* token);
void delete (struct symtable* table,char * var);
struct symtable_entry* lookup (struct symtable* table,char * var);
struct symtable_entry* isDefined (struct symtable* table,char * name,char * type);
TAC* append(TAC* a, TAC* b);
void printcode (TAC* a);
char * str(int num);
char* newtmp();
char* newlabel();
int size (VarAttr *a);
TAC* rev();
void push_to_rev(TAC* node);
TAC* list;
void enter (struct symtable* table,char* name,char* type,int offset);
struct symtable* mktable(struct symtable_entry* previous);
void enterproc(struct symtable* table, char* name,struct symtable* newtable);
void push(sym_table* func);
sym_table* pop();
sym_table* top();