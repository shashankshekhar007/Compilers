typedef struct {
	char text[100];
} string;



typedef struct {
	char place[100];
	TAC *code;
} Attr;

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
}ElIF;

TAC* gen (char *t);
void printsymtable();
struct symtable_entry* insert (char* var, char* token);
void delete (char * var);
struct symtable_entry* lookup (char * var);
TAC* append(TAC* a, TAC* b);
void printcode (TAC* a);
char * str(int num);
char* newtmp();
char* newlabel();
int size (Attr *a);
TAC* rev();
void push(TAC* node);
TAC* list;