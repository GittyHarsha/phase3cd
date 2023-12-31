%{
	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"
	void insert_type();
	void insert_value();
	void insert_dimensions();
	void insert_parameters();
	void remove_scope (int );
	int check_scope(char*);
	int check_function(char *);
	void insert_SymbolTable_nest(char*, int);
	void insert_SymbolTable_paramscount(char*, int);
	int getSTparamscount(char*);
	int check_duplicate(char*);
	int check_declaration(char*, char *);
	int check_params(char*);
	int duplicate(char *s);
	int check_array(char*);
	void insert_SymbolTable_function(char*);
	char gettype(char*,int);
	int check_int(struct node_type a);
	int type_check(struct node_type L, struct node_type R);


		
void pop(void);
void push(int);
void display(void);
void isempty(void);
void isfull(void);

extern int t;
extern int call_params_stack[1000];

	extern int flag;
	int insert_flag = 0;

	extern char current_identifier[20];
	extern char current_type[20];
	extern char current_value[20];
    extern char current_function[20];
	extern char previous_operator[20];
	extern int current_nested_val;
	char currfunctype[100];
	char currfunccall[100];
	extern int params_count;
	int call_params_count;
	int cur_dim_count=0;
	int cur_arr_dim[20]={0};
	int check_dim_count=0;
	int check_arr_dim[20]={0}; 
	int nested_loop=0;

	int switch_default_cnt=0;

	
%}

%code requires {
struct node_type
{
	char name[100];
	int type;
	int no_of_dim;
	int arr_dims[20];
	int pointer_count;
};
}
%union{
	struct node_type node_type;
	char operator[100];
}
%nonassoc IF
%token<node_type> INT CHAR FLOAT DOUBLE LONG SHORT SIGNED UNSIGNED STRUCT UNION
%token RETURN MAIN
%token VOID
%token WHILE FOR DO
%token BREAK CONTINUE GOTO
%token ENDIF
%token SWITCH CASE DEFAULT
%expect 3

%token<node_type> identifier array_identifier
%token<node_type> integer_constant string_constant float_constant character_constant

%nonassoc ELSE

%right<operator> MOD_EQUAL
%right<operator> MULTIPLY_EQUAL DIVIDE_EQUAL
%right<operator> ADD_EQUAL SUBTRACT_EQUAL
%right<operator> '='

%left<operator> OR_OR
%left<operator> AND_AND
%left<operator> '^'
%left<operator> EQUAL NOT_EQUAL
%left<operator> LESS_EQUAL LESS GREAT_EQUAL GREAT
%left<operator> '+' '-'
%left<operator> '*' '/' '%'

%right SIZEOF
%right<operator> NOT
%left<operator> INCREMENT DECREMENT



%start begin_parse

%%
begin_parse
			: declarations;

declarations
			: declaration declarations
			|
			;

declaration
			: variable_dec
			| function_dec
			| structure_dec;

structure_dec
			: STRUCT identifier { insert_type(); } '{' structure_content  '}' ';';

structure_content : variable_dec structure_content | ;


variable_dec
: datatype variables ';'
| pointer_datatype variables ';' 
| structure_initialize;

structure_initialize
			: STRUCT identifier variables;

variables
			: identifier_name multiple_variables;

multiple_variables
			: ',' variables
			| ;

identifier_name
			: identifier { if(check_function(current_identifier))
						  {yyerror("ERROR: Identifier cannot be same as function name!\n"); exit(8);}
						  if(duplicate(current_identifier)){yyerror("Duplicate value!\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type(); } extended_identifier
			| array_identifier {if(duplicate(current_identifier)){yyerror("Duplicate value!\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type();  } extended_identifier;

extended_identifier : array_iden | '='{strcpy(previous_operator,"=");} simple_expression ;

array_iden
: '[' array_dims {cur_dim_count=0;}
| ;

array_dims
: dims initilization 
| ']' string_initilization;

dims
: integer_constant ']' {cur_arr_dim[cur_dim_count]=$1;/*printf("%d %d %d %d",cur_dim_count,cur_arr_dim[0],cur_arr_dim[1],cur_arr_dim[2]);*/}
| integer_constant ']' {cur_arr_dim[cur_dim_count]=$1;cur_dim_count++;} '[' dims 
;

initilization
			: string_initilization
			| array_initialization
			| ;

string_initilization
			: '='{strcpy(previous_operator,"=");} string_constant { insert_value(); };


array_initialization
: '=' {strcpy(previous_operator,"=");} '{' {check_dim_count=0; check_arr_dim[check_dim_count]++;} array_values '}' {printf(" dim at %d , %d\n", check_dim_count, check_arr_dim[check_dim_count]);for(int _ = 0; _ <= cur_dim_count; _++){cur_arr_dim[_]=0;}cur_dim_count=0; for(int _ = 0; _ <= check_dim_count; _++){check_arr_dim[_]=0;}check_arr_dim[check_dim_count]=0;check_dim_count=0;};


multiple_array_values
			: ',' {check_arr_dim[check_dim_count]++;} array_values;

array_values: '{' {check_dim_count++; check_arr_dim[check_dim_count]++;}  array_values {/*checkhere*/printf(" dim at %d , %d\n", check_dim_count, check_arr_dim[check_dim_count]);check_arr_dim[check_dim_count]=0;check_dim_count--;}'}'
 | array_values multiple_array_values;
 | constant;

pointer_datatype
: datatype '*'
| pointer_datatype '*';


datatype
			: INT | CHAR | FLOAT | DOUBLE
			| LONG long_grammar
			| SHORT short_grammar
			| UNSIGNED unsigned_grammar
			| SIGNED signed_grammar
			| VOID ;

unsigned_grammar
			: INT | LONG long_grammar | SHORT short_grammar | ;

signed_grammar
			: INT | LONG long_grammar | SHORT short_grammar | ;

long_grammar
			: INT | ;

short_grammar
			: INT | ;

function_dec
			: function_datatype function_parameters;

function_datatype
			: datatype identifier '('  {strcpy(currfunctype, current_type); check_duplicate(current_identifier); insert_SymbolTable_function(current_identifier);  strcpy(current_function,current_identifier); insert_type();};

function_parameters
			: parameters ')' statement;

parameters
			: datatype { check_params(current_type); } all_parameter_identifiers {insert_SymbolTable_paramscount(current_function, params_count);} 
			| ;

all_parameter_identifiers
			: parameter_identifier multiple_parameters;

multiple_parameters
			: ',' parameters
			| ;

parameter_identifier
			: identifier {insert_parameters(); insert_type(); insert_SymbolTable_nest(current_identifier,1); params_count++;} extended_parameter;

extended_parameter
			: '[' ']'
			| ;

statement
			: expression_statment | multiple_statement
			| conditional_statements | iterative_statements
			| return_statement | break_statement | continue_statement
			| variable_dec;

multiple_statement
			:{current_nested_val++;} '{' statments '}' {remove_scope(current_nested_val);current_nested_val--;} ;

statments
			: statement statments
			| ;

expression_statment
			: expression ';'
			| ';' ;

conditional_statements
			: IF '(' simple_expression ')' {if($3!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}} statement extended_conditional_statements
			| switch_statement;

switch_statement
			: SWITCH  {nested_loop++; switch_default_cnt=0;}'(' expression ')' '{' case_list '}' {nested_loop--; switch_default_cnt=0;};

case_list
			: CASE integer_constant ':' statement  case_list
			| DEFAULT { if(switch_default_cnt>0) 
						{yyerror("multiple default case in swtich statement\n");}  }':' statement case_list
			| ;


extended_conditional_statements
			: ELSE statement
			| ;

iterative_statements
			: WHILE {nested_loop++; printf("loop value: %d", nested_loop);}'(' simple_expression ')'{if($4!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}} statement {nested_loop--;}
			| FOR {nested_loop++; printf("loop value: %d", nested_loop);}'(' for_initialization for_simple_expression ';' {if($5!=1){yyerror("Here, condition must have integer value!\n");exit(0);}} for_expression ')' statement {nested_loop--;}
			| DO {nested_loop++;printf("loop value: %d", nested_loop);}statement WHILE '(' simple_expression ')' {if($6!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}} ';' {nested_loop--;};

for_initialization
			: variable_dec
			| expression ';'
			| ';' ;

for_simple_expression
			: simple_expression
			| ;

for_expression
			: expression
			| ;
return_statement
			: RETURN ';' {if(strcmp(currfunctype,"void")) {yyerror("ERROR: Cannot have void return for non-void function!\n"); exit(0);}}
			| RETURN expression ';' { 	if(!strcmp(currfunctype, "void"))
										{
											yyerror("Non-void return for void function!"); exit(0);
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && $2!=1)
										{
											yyerror("Expression doesn't match return type of function\n"); exit(0);
										}

			                     	};

break_statement
			: BREAK ';' {if(nested_loop==0) {yyerror("can't use break statement outside loop\n");}} ;

continue_statement
: CONTINUE ';' {if(nested_loop==0) {yyerror("can't use continue statement outside loop\n");}} ; 

expression
			: mutable '=' expression              {					strcpy(previous_operator,"=");
																	  if($1==1 && $3==1)
																	  {
			                                                          $$=1;
			                                                          }
			                                                          else
			                                                          {$$=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
			| mutable ADD_EQUAL expression     {					strcpy(previous_operator,"+=");
																	  if($1==1 && $3==1)
			                                                          $$=1;
			                                                          else
			                                                          {$$=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
			| mutable SUBTRACT_EQUAL expression  {					strcpy(previous_operator,"-=");
																	  if($1==1 && $3==1)
			                                                          $$=1;
			                                                          else
			                                                          {$$=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }

			| mutable MULTIPLY_EQUAL expression {					strcpy(previous_operator,"*=");
																	  if($1==1 && $3==1)
			                                                          $$=1;
			                                                          else
			                                                          {$$=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
			| mutable DIVIDE_EQUAL expression 		{				strcpy(previous_operator,"/=");
																	  if($1==1 && $3==1)
			                                                          $$=1;
			                                                          else
			                                                          {$$=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
			| mutable MOD_EQUAL expression 		{					strcpy(previous_operator,"%=");
																	  if($1==1 && $3==1)
			                                                          $$=1;
			                                                          else
			                                                          {$$=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }

			| mutable INCREMENT 							{if($1 == 1) $$=1; else $$=-1;}
			| mutable DECREMENT 							{if($1 == 1) $$=1; else $$=-1;}
			| simple_expression {if($1 == 1) $$=1; else $$=-1;} ;


simple_expression
			: simple_expression OR_OR and_expression {if($1 == 1 && $3==1) $$=1; else $$=-1;}
			| and_expression {if($1 == 1) $$=1; else $$=-1;}
			 ;

and_expression
			: and_expression AND_AND unary_relation_expression {if($1 == 1 && $3==1) $$=1; else $$=-1;}
			  |unary_relation_expression {if($1 == 1) $$=1; else $$=-1;} ;

unary_relation_expression
			: NOT unary_relation_expression {if($2==1) $$=1; else $$=-1;}
			| regular_expression {if($1 == 1) $$=1; else $$=-1;} ;

regular_expression
			: regular_expression relational_operators sum_expression {if($1 == 1 && $3==1) $$=1; else $$=-1;}
			  | sum_expression {if($1 == 1) $$=1; else $$=-1;} 
			  ;

relational_operators
			: GREAT_EQUAL{strcpy(previous_operator,">=");}
			| LESS_EQUAL{strcpy(previous_operator,"<=");}
			| GREAT{strcpy(previous_operator,">");}
			| LESS{strcpy(previous_operator,"<");}
			| EQUAL{strcpy(previous_operator,"==");}
			| NOT_EQUAL{strcpy(previous_operator,"!=");} ;

sum_expression
			: sum_expression sum_operators term  {if($1 == 1 && $3==1) $$=1; else $$=-1;}
			| term {if($1 == 1) $$=1; else $$=-1;};

sum_operators
			: '+'
			| '-' ;

term
			: term MULOP factor {if($1 == 1 && $3==1) $$=1; else $$=-1;}
			| factor {if($1 == 1) $$=1; else $$=-1;} ;

MULOP
			: '*' | '/' | '%' ;

factor
			: immutable {if($1 == 1) $$=1; else $$=-1;}
			| mutable {if($1 == 1) $$=1; else $$=-1;} ;

mutable
			: identifier {
			              if(!check_scope(current_identifier))
			              {printf("%s\n",current_identifier);yyerror("Identifier undeclared\n");exit(0);}
			              if(!check_array(current_identifier))
			              {printf("%s\n",current_identifier);yyerror("Array Identifier has No Subscript\n");exit(0);}
			              if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
			              $$ = 1;
			              else
			              $$ = -1;
			              }
			| array_identifier {if(!check_scope(current_identifier)){printf("%s\n",current_identifier);yyerror("Identifier undeclared\n");exit(0);}} '[' expression ']'
			                   {if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
			              		$$ = 1;
			              		else
			              		$$ = -1;
			              		};

immutable
			: '(' expression ')' {if($2==1) $$=1; else $$=-1;}
			| call
			| constant {if($1==1) $$=1; else $$=-1;};

call
			: identifier '('{ 
						push(0);
				
						strcpy(previous_operator,"(");
			             if(!check_declaration(current_identifier, "Function"))
			             { yyerror("Function not declared"); exit(0);}
			             insert_SymbolTable_function(current_identifier);
						 strcpy(currfunccall,current_identifier);
			             } arguments ')'
						 { if(strcmp(currfunccall,"printf"))
							{
								if(t==-1 || getSTparamscount(currfunccall)!=call_params_stack[t])
								{
									yyerror("Number of parameters not same as number of arguments during function call!");
									//printf("Number of arguments in function call %s doesn't match number of parameters\n", currfunccall);
									exit(8);
								}
							}


							pop();
						 };

arguments
			: arguments_list | ;

arguments_list
			: expression { call_params_stack[t]++; } A ;

A
			: ',' expression { call_params_stack[t]++;} A
			| ;

constant
			: integer_constant 	{  insert_type(); add_primitive_node("int", 1);  }
			| string_constant	{  insert_type();  }
			| float_constant	{  insert_type(); add_primitive_node("float", 1);  }
			| character_constant{  insert_type();add_primitive_node("char", 1); };


%%
/*struct node_type
{
	char name[100];
	int type;
	int no_of_dim;
	int arr_dims[20];
	int pointer_count;
};*/

struct node_type add_primitive_node(char[] name, int type) {
	struct node_type node;
	strcpy(node.name, name);
	node.type=type;
	return node;
}

struct node_type add_array_node(char[] name, int type, int no_of_dim, int arr_dims[]) {
	struct node_type node;
	strcpy(node.name, name);
	node.type=type;
	node.no_of_dim=no_of_dim;
	for(int i=0;i<no_of_dim;i++) {
		node.arr_dims[i]=arr_dims[i];
	}
	return node;
}



extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insert_SymbolTable_type(char *,char *);
void insert_SymbolTable_value(char *, char *);
void insert_ConstantTable(char *, char *);
void insert_SymbolTable_arraydim(char *, char *);
void insert_SymbolTable_funcparam(char *, char *);
void printSymbolTable();
void printConstantTable();


int main()
{
	yyin = fopen("test2.c", "r");
	yyparse();

	if(flag == 0)
	{
		printf("VALID PARSE\n");
		printf("%30s SYMBOL TABLE \n", " ");
		printf("%30s %s\n", " ", "------------");
		printSymbolTable();

		printf("\n\n%30s CONSTANT TABLE \n", " ");
		printf("%30s %s\n", " ", "--------------");
		printConstantTable();
	}
}

void yyerror(char *s)
{
	printf("Line No. : %d %s %s\n",yylineno, s, yytext);
	flag=1;
	printf("\nUNSUCCESSFUL: INVALID PARSE\n");
	exit(1);
}

void insert_type()
{
	insert_SymbolTable_type(current_identifier,current_type);
}

void insert_value()
{
	if(strcmp(previous_operator, "=") == 0)
	{	insert_SymbolTable_value(current_identifier,current_value);
	}
}

void insert_dimensions()
{
    insert_SymbolTable_arraydim(current_identifier, current_value);
}

void insert_parameters()
{
    insert_SymbolTable_funcparam(current_function, current_identifier);
}

int check_int(struct node_type a)
{
	return ((a.type == 1) && (strcmp(a.name, "int") == 0)); 
}

int type_check(struct node_type L, struct node_type R)
{
	if (L.type == R.type)
	{
		if (L.type == 1) return 1;
		else if (L.type == 2)
		{
			if ((strcmp(L.name,R.name) == 0) && (L.pointer_count == R.pointer_count)) return 1;
		}
		else if (L.type == 3)
		{
			if (L.no_of_dim == R.no_of_dim)
			{
				
			}
		}
	}
	else
	{

	}
}


int yywrap()
{
	return 1;
}
