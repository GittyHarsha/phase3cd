%{
void yyerror(char* s);
int yylex();
#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
#include "string.h"
#include "symbol_table.h"

%}

%nonassoc IF
%token WHILE FOR DO
%token SWITCH CASE DEFAULT
%token INT CHAR FLOAT DOUBLE LONG SHORT SIGNED UNSIGNED STRUCT UNION
%token RETURN MAIN
%token BREAK CONTINUE GOTO
%token ENDIF

%token VOID

%expect 3

%token identifier
%token integer_constant string_constant float_constant character_constant binary_constant hexadecimal_constant exponent_constant octal_constant
%token LEFT_SHIFT RIGHT_SHIFT
%nonassoc ELSE


%right MOD_EQUAL
%right MULTIPLY_EQUAL DIVIDE_EQUAL
%right ADD_EQUAL SUBTRACT_EQUAL
%right '='

%left LOGICAL_OR
%left LOGICAL_AND
%left '^'
%left EQUAL NOT_EQUAL
%left LESS_EQUAL LESS GREAT_EQUAL GREAT
%left '+' '-'
%left '*' '/' '%'

%right SIZEOF
%right NOT
%left INCREMENT DECREMENT


%start head_parse

%%
head_parse
: declarations ;

declarations
: declaration declarations
|
;

declaration
: variable_declaration 
| function_declaration
| structure_declaration;

structure_declaration
: STRUCT identifier '{' structure_content  '}' ';'
| UNION identifier '{' structure_content  '}' ';';

structure_content : variable_declaration   structure_content | ;

variable_declaration
: datatype variables ';'
| pointer_datatype variables ';' ;


variables
: identifier_name multiple_variables;

multiple_variables
: ',' variables
| ;

identifier_name
: identifier {printf("found identifier\n");} extended_identifier;

extended_identifier : array_identifier | '=' expression ;

array_identifier
: '[' array_dims
| ;

array_dims
: dims initilization
| ']' string_initilization;

dims
: integer_constant ']'
| integer_constant ']' '[' dims
;
initilization
: string_initilization
| array_initialization
| ;

string_initilization
: '='  string_constant ;

array_initialization
: '=' '{' array_values '}' ;


multiple_array_values
			: ',' array_values;

array_values: '{' array_values '}'
 | array_values multiple_array_values;
 | constant;

pointer_datatype
: datatype '*'
| pointer_datatype '*';

datatype
: INT {printf("found int\n");}| CHAR | FLOAT | DOUBLE
| LONG long_grammar
| SHORT short_grammar
| UNSIGNED unsigned_grammar
| SIGNED signed_grammar
| VOID 
| STRUCT identifier
| UNION identifier;

unsigned_grammar
: INT | LONG long_grammar | SHORT short_grammar | ;

signed_grammar
: INT | LONG long_grammar | SHORT short_grammar | ;

long_grammar
: INT | ;

short_grammar
: INT | ;

function_declaration
: function_datatype function_parameters;

function_datatype
: datatype identifier '(' ;
| pointer_datatype identifier '(' ;

function_parameters
: parameters ')' statement;

parameters
: datatype all_parameter_identifiers
| STRUCT identifier all_parameter_identifiers
| pointer_datatype all_parameter_identifiers
| ;

all_parameter_identifiers
: parameter_identifier multiple_parameters;

multiple_parameters
: ',' parameters
| ;

parameter_identifier
: identifier extended_parameter;

extended_parameter
: '[' ']'
| ;

statement
: expression_statment | multiple_statement
| conditional_statements | iterative_statements
| return_statement | break_statement
| variable_declaration ;



multiple_statement
: '{' statements '}' ;

statements
: statement statements
| ;

expression_statment
: expression ';'
| ';' ;

conditional_statements
: IF '(' simple_expression ')' statement extended_conditional_statements;

extended_conditional_statements
: ELSE statement
| ;

iterative_statements
: WHILE '(' simple_expression ')' statement
| FOR '(' for_initialization for_simple_expression ';' for_expression ')'
| DO statement WHILE '(' simple_expression ')' ';';

for_simple_expression: simple_expression | ;
for_expression: expression | ;
for_initialization
: variable_declaration 
| expression ';'
| ';' ;

return_statement
: RETURN return_element;

return_element
: ';'
| expression ';' ;

break_statement
: BREAK ';' ;

expression
: id expressions
| simple_expression ;

expressions
: '=' expression
| ADD_EQUAL expression
| SUBTRACT_EQUAL expression
| MULTIPLY_EQUAL expression
| DIVIDE_EQUAL expression
| MOD_EQUAL expression
| INCREMENT
| DECREMENT ;

simple_expression
: and_expression simple_expression_extend ;

simple_expression_extend
: LOGICAL_OR and_expression simple_expression_extend | ;

and_expression
: unary_relation_expression and_expression_extend;

and_expression_extend
: LOGICAL_AND unary_relation_expression and_expression_extend
| ;

unary_relation_expression
: NOT unary_relation_expression
| regular_expression ;

regular_expression
: sum_expression regular_expression_extend;

regular_expression_extend
: relational_operators sum_expression
| ;

relational_operators
: NOT_EQUAL
| LESS_EQUAL
| GREAT
| LESS
| EQUAL
| GREAT_EQUAL ;

sum_expression
: sum_expression sum_operators term
| term ;

sum_operators
: '+'
| '-' ;

term
: term multiply_operators factor
| factor ;

multiply_operators
: '*' | '/' | '%' ;

factor
: non_id | id ;

id
: identifier
| '&' identifier {printf("\nwith address\n");}
| id extended_id; 

extended_id
: '[' expression ']'
| '.' identifier;

non_id
: '(' expression ')'
| function_call | constant;

function_call
: identifier '(' arguments ')';

arguments
: arguments_list | ;

arguments_list
: expression extended_arguments;

extended_arguments
: ',' expression extended_arguments
| ;

constant
: integer_constant
| string_constant
| float_constant
| character_constant
| octal_constant
| hexadecimal_constant
| binary_constant
| exponent_constant;


%%

extern FILE *yyin;
extern int yylineno;
extern char *yytext;



int main(int argc, char** argv)
{
char PATH[100]="./test_cases/";
strcat(PATH, argv[1]);

yyin = fopen(PATH, "r");
printf("entering the parsing phase\n");
int ok=yyparse();



if(ok == 0)
{
printf("VALID PARSE\n");

}
}

void yyerror(char *s)
{
printf("Line No. : %d %s %s\n",yylineno, s, yytext);

}

int yywrap()
{
return 1;
}