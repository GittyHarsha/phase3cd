/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser1.y"

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


#line 112 "parser1.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser1.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 7,                     /* DOUBLE  */
  YYSYMBOL_LONG = 8,                       /* LONG  */
  YYSYMBOL_SHORT = 9,                      /* SHORT  */
  YYSYMBOL_SIGNED = 10,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 11,                  /* UNSIGNED  */
  YYSYMBOL_STRUCT = 12,                    /* STRUCT  */
  YYSYMBOL_UNION = 13,                     /* UNION  */
  YYSYMBOL_RETURN = 14,                    /* RETURN  */
  YYSYMBOL_MAIN = 15,                      /* MAIN  */
  YYSYMBOL_VOID = 16,                      /* VOID  */
  YYSYMBOL_WHILE = 17,                     /* WHILE  */
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_DO = 19,                        /* DO  */
  YYSYMBOL_BREAK = 20,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 21,                  /* CONTINUE  */
  YYSYMBOL_GOTO = 22,                      /* GOTO  */
  YYSYMBOL_ENDIF = 23,                     /* ENDIF  */
  YYSYMBOL_SWITCH = 24,                    /* SWITCH  */
  YYSYMBOL_CASE = 25,                      /* CASE  */
  YYSYMBOL_DEFAULT = 26,                   /* DEFAULT  */
  YYSYMBOL_identifier = 27,                /* identifier  */
  YYSYMBOL_array_identifier = 28,          /* array_identifier  */
  YYSYMBOL_integer_constant = 29,          /* integer_constant  */
  YYSYMBOL_string_constant = 30,           /* string_constant  */
  YYSYMBOL_float_constant = 31,            /* float_constant  */
  YYSYMBOL_character_constant = 32,        /* character_constant  */
  YYSYMBOL_ELSE = 33,                      /* ELSE  */
  YYSYMBOL_MOD_EQUAL = 34,                 /* MOD_EQUAL  */
  YYSYMBOL_MULTIPLY_EQUAL = 35,            /* MULTIPLY_EQUAL  */
  YYSYMBOL_DIVIDE_EQUAL = 36,              /* DIVIDE_EQUAL  */
  YYSYMBOL_ADD_EQUAL = 37,                 /* ADD_EQUAL  */
  YYSYMBOL_SUBTRACT_EQUAL = 38,            /* SUBTRACT_EQUAL  */
  YYSYMBOL_39_ = 39,                       /* '='  */
  YYSYMBOL_OR_OR = 40,                     /* OR_OR  */
  YYSYMBOL_AND_AND = 41,                   /* AND_AND  */
  YYSYMBOL_42_ = 42,                       /* '^'  */
  YYSYMBOL_EQUAL = 43,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 44,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS_EQUAL = 45,                /* LESS_EQUAL  */
  YYSYMBOL_LESS = 46,                      /* LESS  */
  YYSYMBOL_GREAT_EQUAL = 47,               /* GREAT_EQUAL  */
  YYSYMBOL_GREAT = 48,                     /* GREAT  */
  YYSYMBOL_49_ = 49,                       /* '+'  */
  YYSYMBOL_50_ = 50,                       /* '-'  */
  YYSYMBOL_51_ = 51,                       /* '*'  */
  YYSYMBOL_52_ = 52,                       /* '/'  */
  YYSYMBOL_53_ = 53,                       /* '%'  */
  YYSYMBOL_SIZEOF = 54,                    /* SIZEOF  */
  YYSYMBOL_NOT = 55,                       /* NOT  */
  YYSYMBOL_INCREMENT = 56,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 57,                 /* DECREMENT  */
  YYSYMBOL_58_ = 58,                       /* '{'  */
  YYSYMBOL_59_ = 59,                       /* '}'  */
  YYSYMBOL_60_ = 60,                       /* ';'  */
  YYSYMBOL_61_ = 61,                       /* ','  */
  YYSYMBOL_62_ = 62,                       /* '['  */
  YYSYMBOL_63_ = 63,                       /* ']'  */
  YYSYMBOL_64_ = 64,                       /* '('  */
  YYSYMBOL_65_ = 65,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_begin_parse = 67,               /* begin_parse  */
  YYSYMBOL_declarations = 68,              /* declarations  */
  YYSYMBOL_declaration = 69,               /* declaration  */
  YYSYMBOL_structure_declaration = 70,     /* structure_declaration  */
  YYSYMBOL_71_1 = 71,                      /* $@1  */
  YYSYMBOL_72_2 = 72,                      /* $@2  */
  YYSYMBOL_73_3 = 73,                      /* $@3  */
  YYSYMBOL_74_4 = 74,                      /* $@4  */
  YYSYMBOL_structure_content = 75,         /* structure_content  */
  YYSYMBOL_variable_declaration = 76,      /* variable_declaration  */
  YYSYMBOL_variables = 77,                 /* variables  */
  YYSYMBOL_multiple_variables = 78,        /* multiple_variables  */
  YYSYMBOL_identifier_name = 79,           /* identifier_name  */
  YYSYMBOL_80_5 = 80,                      /* $@5  */
  YYSYMBOL_81_6 = 81,                      /* $@6  */
  YYSYMBOL_extended_identifier = 82,       /* extended_identifier  */
  YYSYMBOL_83_7 = 83,                      /* $@7  */
  YYSYMBOL_array_iden = 84,                /* array_iden  */
  YYSYMBOL_array_dims = 85,                /* array_dims  */
  YYSYMBOL_86_8 = 86,                      /* $@8  */
  YYSYMBOL_initilization = 87,             /* initilization  */
  YYSYMBOL_string_initilization = 88,      /* string_initilization  */
  YYSYMBOL_89_9 = 89,                      /* $@9  */
  YYSYMBOL_array_initialization = 90,      /* array_initialization  */
  YYSYMBOL_91_10 = 91,                     /* $@10  */
  YYSYMBOL_array_values = 92,              /* array_values  */
  YYSYMBOL_multiple_array_values = 93,     /* multiple_array_values  */
  YYSYMBOL_datatype = 94,                  /* datatype  */
  YYSYMBOL_pointer_datatype = 95,          /* pointer_datatype  */
  YYSYMBOL_unsigned_grammar = 96,          /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 97,            /* signed_grammar  */
  YYSYMBOL_long_grammar = 98,              /* long_grammar  */
  YYSYMBOL_short_grammar = 99,             /* short_grammar  */
  YYSYMBOL_function_declaration = 100,     /* function_declaration  */
  YYSYMBOL_function_datatype = 101,        /* function_datatype  */
  YYSYMBOL_function_parameters = 102,      /* function_parameters  */
  YYSYMBOL_parameters = 103,               /* parameters  */
  YYSYMBOL_104_11 = 104,                   /* $@11  */
  YYSYMBOL_all_parameter_identifiers = 105, /* all_parameter_identifiers  */
  YYSYMBOL_multiple_parameters = 106,      /* multiple_parameters  */
  YYSYMBOL_parameter_identifier = 107,     /* parameter_identifier  */
  YYSYMBOL_108_12 = 108,                   /* $@12  */
  YYSYMBOL_extended_parameter = 109,       /* extended_parameter  */
  YYSYMBOL_statement = 110,                /* statement  */
  YYSYMBOL_multiple_statement = 111,       /* multiple_statement  */
  YYSYMBOL_112_13 = 112,                   /* $@13  */
  YYSYMBOL_statments = 113,                /* statments  */
  YYSYMBOL_expression_statment = 114,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 115,   /* conditional_statements  */
  YYSYMBOL_116_14 = 116,                   /* $@14  */
  YYSYMBOL_extended_conditional_statements = 117, /* extended_conditional_statements  */
  YYSYMBOL_iterative_statements = 118,     /* iterative_statements  */
  YYSYMBOL_119_15 = 119,                   /* $@15  */
  YYSYMBOL_120_16 = 120,                   /* $@16  */
  YYSYMBOL_121_17 = 121,                   /* $@17  */
  YYSYMBOL_for_initialization = 122,       /* for_initialization  */
  YYSYMBOL_return_statement = 123,         /* return_statement  */
  YYSYMBOL_break_statement = 124,          /* break_statement  */
  YYSYMBOL_expression = 125,               /* expression  */
  YYSYMBOL_simple_expression = 126,        /* simple_expression  */
  YYSYMBOL_and_expression = 127,           /* and_expression  */
  YYSYMBOL_unary_relation_expression = 128, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 129,       /* regular_expression  */
  YYSYMBOL_relational_operators = 130,     /* relational_operators  */
  YYSYMBOL_sum_expression = 131,           /* sum_expression  */
  YYSYMBOL_sum_operators = 132,            /* sum_operators  */
  YYSYMBOL_term = 133,                     /* term  */
  YYSYMBOL_MULOP = 134,                    /* MULOP  */
  YYSYMBOL_factor = 135,                   /* factor  */
  YYSYMBOL_mutable = 136,                  /* mutable  */
  YYSYMBOL_137_18 = 137,                   /* $@18  */
  YYSYMBOL_immutable = 138,                /* immutable  */
  YYSYMBOL_call = 139,                     /* call  */
  YYSYMBOL_140_19 = 140,                   /* $@19  */
  YYSYMBOL_arguments = 141,                /* arguments  */
  YYSYMBOL_arguments_list = 142,           /* arguments_list  */
  YYSYMBOL_143_20 = 143,                   /* $@20  */
  YYSYMBOL_A = 144,                        /* A  */
  YYSYMBOL_145_21 = 145,                   /* $@21  */
  YYSYMBOL_constant = 146                  /* constant  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   296

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  162
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  251

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    53,     2,     2,
      64,    65,    51,    49,    61,    50,     2,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    60,
       2,    39,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,    63,    42,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,    59,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    40,    41,    43,    44,    45,    46,
      47,    48,    54,    55,    56,    57
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    79,    79,    82,    83,    87,    88,    89,    92,    92,
      92,    93,    93,    93,    95,    95,    98,    99,   104,   107,
     108,   111,   111,   114,   114,   116,   116,   116,   119,   120,
     123,   123,   124,   128,   129,   130,   133,   133,   136,   136,
     139,   142,   143,   147,   147,   147,   147,   148,   149,   150,
     151,   152,   153,   154,   157,   158,   163,   163,   163,   163,
     166,   166,   166,   166,   169,   169,   172,   172,   175,   178,
     181,   184,   184,   184,   187,   190,   191,   194,   194,   197,
     198,   201,   201,   202,   202,   203,   203,   204,   207,   207,
     210,   211,   214,   215,   218,   218,   221,   222,   225,   225,
     226,   226,   227,   227,   230,   231,   232,   235,   236,   249,
     253,   261,   267,   274,   280,   286,   293,   294,   295,   299,
     300,   303,   304,   307,   308,   311,   312,   315,   316,   317,
     318,   319,   320,   323,   324,   327,   328,   331,   332,   335,
     335,   335,   338,   339,   342,   352,   352,   360,   361,   362,
     365,   365,   383,   383,   386,   386,   389,   389,   390,   393,
     394,   395,   396
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF", "INT", "CHAR",
  "FLOAT", "DOUBLE", "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT",
  "UNION", "RETURN", "MAIN", "VOID", "WHILE", "FOR", "DO", "BREAK",
  "CONTINUE", "GOTO", "ENDIF", "SWITCH", "CASE", "DEFAULT", "identifier",
  "array_identifier", "integer_constant", "string_constant",
  "float_constant", "character_constant", "ELSE", "MOD_EQUAL",
  "MULTIPLY_EQUAL", "DIVIDE_EQUAL", "ADD_EQUAL", "SUBTRACT_EQUAL", "'='",
  "OR_OR", "AND_AND", "'^'", "EQUAL", "NOT_EQUAL", "LESS_EQUAL", "LESS",
  "GREAT_EQUAL", "GREAT", "'+'", "'-'", "'*'", "'/'", "'%'", "SIZEOF",
  "NOT", "INCREMENT", "DECREMENT", "'{'", "'}'", "';'", "','", "'['",
  "']'", "'('", "')'", "$accept", "begin_parse", "declarations",
  "declaration", "structure_declaration", "$@1", "$@2", "$@3", "$@4",
  "structure_content", "variable_declaration", "variables",
  "multiple_variables", "identifier_name", "$@5", "$@6",
  "extended_identifier", "$@7", "array_iden", "array_dims", "$@8",
  "initilization", "string_initilization", "$@9", "array_initialization",
  "$@10", "array_values", "multiple_array_values", "datatype",
  "pointer_datatype", "unsigned_grammar", "signed_grammar", "long_grammar",
  "short_grammar", "function_declaration", "function_datatype",
  "function_parameters", "parameters", "$@11", "all_parameter_identifiers",
  "multiple_parameters", "parameter_identifier", "$@12",
  "extended_parameter", "statement", "multiple_statement", "$@13",
  "statments", "expression_statment", "conditional_statements", "$@14",
  "extended_conditional_statements", "iterative_statements", "$@15",
  "$@16", "$@17", "for_initialization", "return_statement",
  "break_statement", "expression", "simple_expression", "and_expression",
  "unary_relation_expression", "regular_expression",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "$@18", "immutable", "call", "$@19",
  "arguments", "arguments_list", "$@20", "A", "$@21", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-115)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-92)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     173,  -115,  -115,  -115,  -115,    30,    32,    63,   101,    12,
      14,  -115,    50,  -115,   173,  -115,  -115,    49,    60,  -115,
     261,  -115,  -115,  -115,  -115,  -115,    30,    32,  -115,  -115,
      30,    32,  -115,     0,     2,  -115,  -115,   -16,  -115,  -115,
       5,    19,  -115,  -115,    13,    36,    79,  -115,  -115,    26,
    -115,  -115,  -115,  -115,    54,    57,  -115,    -8,    -8,  -115,
      76,  -115,  -115,  -115,  -115,    89,   194,   261,   261,  -115,
     -10,  -115,  -115,  -115,  -115,  -115,  -115,    58,    56,    15,
      59,    65,   194,    61,    68,  -115,  -115,  -115,  -115,  -115,
      67,  -115,    67,  -115,    74,  -115,  -115,    66,  -115,  -115,
    -115,  -115,  -115,    73,    87,    93,  -115,   172,    64,   -31,
    -115,   137,  -115,  -115,  -115,    69,   261,    88,    67,  -115,
     114,  -115,    95,   261,  -115,    67,  -115,   105,    67,   232,
     149,  -115,  -115,   106,  -115,  -115,   102,   132,  -115,    67,
      67,  -115,  -115,  -115,  -115,  -115,  -115,    -3,  -115,  -115,
      -3,  -115,  -115,  -115,    -3,    67,    67,    67,    67,    67,
      67,  -115,  -115,  -115,  -115,  -115,    87,   107,  -115,  -115,
     125,  -115,  -115,   -32,  -115,   -30,  -115,  -115,    67,   130,
     131,    67,    67,  -115,   132,   150,    93,  -115,    64,   -31,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,   167,   168,   190,
     200,  -115,  -115,  -115,   -28,  -115,    67,  -115,   166,  -115,
     169,  -115,  -115,  -115,  -115,   175,  -115,  -115,  -115,  -115,
     194,   194,  -115,   -27,   174,  -115,  -115,   176,   213,  -115,
      67,  -115,    67,  -115,   218,   194,  -115,   185,   191,  -115,
     192,   193,  -115,  -115,  -115,   174,   218,  -115,  -115,  -115,
    -115
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    43,    44,    45,    46,    65,    67,    63,    59,     0,
       0,    51,     0,     2,     4,     7,     5,     0,     0,     6,
      73,    64,    47,    66,    48,    60,    65,    67,    50,    56,
      65,    67,    49,    52,    53,     1,     3,    21,    23,    54,
       0,    20,    21,    55,     0,     0,     0,    71,    68,     0,
      61,    62,    57,    58,     0,     0,    69,    29,    29,    16,
       0,    18,    17,    52,    53,     0,    88,    15,    15,    26,
       0,    22,    25,    24,    19,    77,    72,    76,     0,     0,
       0,     0,    88,     0,   144,   145,   159,   160,   161,   162,
       0,    93,     0,    87,     0,    70,    82,     0,    81,    83,
      84,    85,    86,     0,   118,   120,   122,   124,   126,   134,
     138,   143,   142,   148,   149,     0,    15,     0,     0,    30,
       0,    28,    80,    73,    74,     0,   107,     0,     0,     0,
       0,   109,   150,     0,   123,   143,     0,    88,    92,     0,
       0,   131,   132,   128,   130,   127,   129,     0,   135,   136,
       0,   139,   140,   141,     0,     0,     0,     0,     0,     0,
       0,   116,   117,     9,    14,    12,    27,     0,    36,    32,
       0,    78,    75,     0,   108,     0,   106,   104,     0,     0,
       0,   153,     0,   147,    88,     0,   119,   121,   125,   133,
     137,   115,   113,   114,   111,   112,   110,     0,     0,    35,
       0,    79,    94,    98,     0,   105,     0,   154,     0,   152,
       0,    90,    89,    10,    13,    36,    31,    33,    34,    37,
      88,    88,   100,     0,   158,   151,   146,     0,    97,    99,
       0,   102,     0,   155,     0,    88,    95,     0,     0,   156,
      42,     0,    96,   101,   103,   158,     0,    40,    39,   157,
      41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -115,  -115,   241,  -115,  -115,  -115,  -115,  -115,  -115,   -59,
       1,   -11,  -115,  -115,  -115,  -115,   198,  -115,  -115,  -115,
    -115,  -115,    77,  -115,  -115,  -115,    11,  -115,     3,  -115,
    -115,  -115,    48,    62,  -115,  -115,  -115,   152,  -115,  -115,
    -115,  -115,  -115,  -115,   -66,  -115,  -115,    94,  -115,  -115,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,   -74,
    -114,   140,   -84,  -115,  -115,   133,  -115,   134,  -115,   127,
     -88,  -115,  -115,  -115,  -115,  -115,  -115,  -115,    37,  -115,
    -115
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    12,    13,    14,    15,    54,   197,    55,   198,   115,
      93,    40,    61,    41,    57,    58,    71,   118,    72,   121,
     167,   216,   169,   200,   218,   227,   241,   247,    94,    18,
      32,    28,    22,    24,    19,    20,    48,    49,    65,    76,
     124,    77,   122,   171,   184,    96,    97,   185,    98,    99,
     220,   236,   100,   221,   230,   238,   178,   101,   102,   103,
     104,   105,   106,   107,   147,   108,   150,   109,   154,   110,
     111,   133,   112,   113,   181,   208,   209,   224,   233,   245,
     114
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      95,    16,   135,    17,   166,   127,   134,    44,   139,   117,
     139,   173,   139,   139,   175,    16,   130,    17,   136,   119,
     151,   152,   153,    47,    84,    85,    86,    87,    88,    89,
     135,    69,   222,   202,    21,   203,    23,   135,   231,    33,
     135,    34,    84,    85,    86,    87,    88,    89,    56,    74,
      35,   135,   135,   120,    70,   179,   187,   164,    -8,   135,
     -11,    92,   135,    63,   204,    59,   135,    25,   116,   116,
      90,    26,    27,    62,    50,   126,    37,    38,    52,    92,
      60,   191,   192,   193,   194,   195,   196,    42,    38,    51,
     135,    66,   223,    53,    84,    85,    86,    87,    88,    89,
      39,    42,    38,    42,    38,    29,    64,   207,   210,    30,
      31,    43,    67,   148,   149,    68,    75,   116,   135,   123,
     125,   131,    90,   128,   137,    39,    47,   139,   163,   129,
     177,    92,   132,   138,   140,    78,     1,     2,     3,     4,
       5,     6,     7,     8,    45,    46,    79,   165,    11,    80,
      81,    82,    83,   168,   228,   229,   237,   170,   239,    84,
      85,    86,    87,    88,    89,   174,   180,   183,   182,   242,
     199,   155,   156,   157,   158,   159,   160,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    90,   201,    11,
     205,   -91,    91,   161,   162,   206,    92,    78,     1,     2,
       3,     4,     5,     6,     7,     8,    45,    46,    79,   212,
      11,    80,    81,    82,    83,   141,   142,   143,   144,   145,
     146,    84,    85,    86,    87,    88,    89,   213,   214,   215,
     219,   225,   226,   -38,   234,   232,     1,     2,     3,     4,
       5,     6,     7,     8,    45,    46,   235,   240,    11,    90,
     243,   244,   248,   246,    91,    36,    73,   250,    92,    84,
      85,    86,    87,    88,    89,     1,     2,     3,     4,     5,
       6,     7,     8,    45,    46,   172,   217,    11,   211,   186,
     188,   190,   249,     0,   189,     0,     0,    90,     0,     0,
       0,     0,   176,     0,     0,     0,    92
};

static const yytype_int16 yycheck[] =
{
      66,     0,    90,     0,   118,    79,    90,    18,    40,    68,
      40,   125,    40,    40,   128,    14,    82,    14,    92,    29,
      51,    52,    53,    20,    27,    28,    29,    30,    31,    32,
     118,    39,    60,    65,     4,    65,     4,   125,    65,    27,
     128,    27,    27,    28,    29,    30,    31,    32,    64,    60,
       0,   139,   140,    63,    62,   129,   140,   116,    58,   147,
      58,    64,   150,    27,   178,    60,   154,     4,    67,    68,
      55,     8,     9,    60,    26,    60,    27,    28,    30,    64,
      61,   155,   156,   157,   158,   159,   160,    27,    28,    27,
     178,    65,   206,    31,    27,    28,    29,    30,    31,    32,
      51,    27,    28,    27,    28,     4,    27,   181,   182,     8,
       9,    51,    58,    49,    50,    58,    27,   116,   206,    61,
      64,    60,    55,    64,    58,    51,   123,    40,    59,    64,
     129,    64,    64,    60,    41,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    59,    16,    17,
      18,    19,    20,    39,   220,   221,   230,    62,   232,    27,
      28,    29,    30,    31,    32,    60,    17,    65,    62,   235,
      63,    34,    35,    36,    37,    38,    39,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    55,    63,    16,
      60,    59,    60,    56,    57,    64,    64,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    59,
      16,    17,    18,    19,    20,    43,    44,    45,    46,    47,
      48,    27,    28,    29,    30,    31,    32,    60,    60,    39,
      30,    65,    63,    58,    58,    61,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    33,    29,    16,    55,
      65,    60,    59,    61,    60,    14,    58,   246,    64,    27,
      28,    29,    30,    31,    32,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,   123,   199,    16,   184,   139,
     147,   154,   245,    -1,   150,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    64
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    16,    67,    68,    69,    70,    76,    94,    95,   100,
     101,     4,    98,     4,    99,     4,     8,     9,    97,     4,
       8,     9,    96,    27,    27,     0,    68,    27,    28,    51,
      77,    79,    27,    51,    77,    12,    13,    94,   102,   103,
      98,    99,    98,    99,    71,    73,    64,    80,    81,    60,
      61,    78,    60,    27,    27,   104,    65,    58,    58,    39,
      62,    82,    84,    82,    77,    27,   105,   107,     3,    14,
      17,    18,    19,    20,    27,    28,    29,    30,    31,    32,
      55,    60,    64,    76,    94,   110,   111,   112,   114,   115,
     118,   123,   124,   125,   126,   127,   128,   129,   131,   133,
     135,   136,   138,   139,   146,    75,    76,    75,    83,    29,
      63,    85,   108,    61,   106,    64,    60,   125,    64,    64,
     110,    60,    64,   137,   128,   136,   125,    58,    60,    40,
      41,    43,    44,    45,    46,    47,    48,   130,    49,    50,
     132,    51,    52,    53,   134,    34,    35,    36,    37,    38,
      39,    56,    57,    59,    75,    59,   126,    86,    39,    88,
      62,   109,   103,   126,    60,   126,    60,    76,   122,   125,
      17,   140,    62,    65,   110,   113,   127,   128,   131,   133,
     135,   125,   125,   125,   125,   125,   125,    72,    74,    63,
      89,    63,    65,    65,   126,    60,    64,   125,   141,   142,
     125,   113,    59,    60,    60,    39,    87,    88,    90,    30,
     116,   119,    60,   126,   143,    65,    63,    91,   110,   110,
     120,    65,    61,   144,    58,    33,   117,   125,   121,   125,
      29,    92,   110,    65,    60,   145,    61,    93,    59,   144,
      92
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    68,    68,    69,    69,    69,    71,    72,
      70,    73,    74,    70,    75,    75,    76,    76,    77,    78,
      78,    80,    79,    81,    79,    82,    83,    82,    84,    84,
      86,    85,    85,    87,    87,    87,    89,    88,    91,    90,
      92,    93,    93,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    95,    95,    96,    96,    96,    96,
      97,    97,    97,    97,    98,    98,    99,    99,   100,   101,
     102,   104,   103,   103,   105,   106,   106,   108,   107,   109,
     109,   110,   110,   110,   110,   110,   110,   110,   112,   111,
     113,   113,   114,   114,   116,   115,   117,   117,   119,   118,
     120,   118,   121,   118,   122,   122,   122,   123,   123,   124,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   126,
     126,   127,   127,   128,   128,   129,   129,   130,   130,   130,
     130,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     134,   134,   135,   135,   136,   137,   136,   138,   138,   138,
     140,   139,   141,   141,   143,   142,   145,   144,   144,   146,
     146,   146,   146
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     0,     0,
       8,     0,     0,     8,     2,     0,     3,     3,     2,     2,
       0,     0,     3,     0,     3,     1,     0,     3,     2,     0,
       0,     4,     2,     1,     1,     0,     0,     3,     0,     5,
       2,     2,     0,     1,     1,     1,     1,     2,     2,     2,
       2,     1,     2,     2,     2,     2,     1,     2,     2,     0,
       1,     2,     2,     0,     1,     0,     1,     0,     2,     3,
       3,     0,     3,     0,     2,     2,     0,     0,     3,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       2,     0,     2,     1,     0,     7,     2,     0,     0,     6,
       0,     8,     0,     8,     1,     2,     1,     2,     3,     2,
       3,     3,     3,     3,     3,     3,     2,     2,     1,     3,
       1,     3,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     0,     5,     3,     1,     1,
       0,     5,     1,     0,     0,     3,     0,     4,     0,     1,
       1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 8: /* $@1: %empty  */
#line 92 "parser1.y"
                    {current_nested_val++;}
#line 1461 "parser1.tab.c"
    break;

  case 9: /* $@2: %empty  */
#line 92 "parser1.y"
                                                                       {remove_scope(current_nested_val);current_nested_val--;}
#line 1467 "parser1.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 93 "parser1.y"
                   {current_nested_val++;}
#line 1473 "parser1.tab.c"
    break;

  case 12: /* $@4: %empty  */
#line 93 "parser1.y"
                                                                      {remove_scope(current_nested_val);current_nested_val--;}
#line 1479 "parser1.tab.c"
    break;

  case 21: /* $@5: %empty  */
#line 111 "parser1.y"
                                     { if(check_function(current_identifier))
						  {yyerror("ERROR: Identifier cannot be same as function name!\n"); exit(8);}
						  if(duplicate(current_identifier)){yyerror("Duplicate value!\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type(); }
#line 1487 "parser1.tab.c"
    break;

  case 23: /* $@6: %empty  */
#line 114 "parser1.y"
                                           {if(duplicate(current_identifier)){yyerror("Duplicate value!\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type();  }
#line 1493 "parser1.tab.c"
    break;

  case 26: /* $@7: %empty  */
#line 116 "parser1.y"
                                      {strcpy(previous_operator,"=");}
#line 1499 "parser1.tab.c"
    break;

  case 30: /* $@8: %empty  */
#line 123 "parser1.y"
                                           {insert_dimensions();}
#line 1505 "parser1.tab.c"
    break;

  case 31: /* array_dims: integer_constant $@8 ']' initilization  */
#line 123 "parser1.y"
                                                                                   {if(yyval < 1) {yyerror("Array must have size greater than 1!\n"); exit(0);} }
#line 1511 "parser1.tab.c"
    break;

  case 36: /* $@9: %empty  */
#line 133 "parser1.y"
                             {strcpy(previous_operator,"=");}
#line 1517 "parser1.tab.c"
    break;

  case 37: /* string_initilization: '=' $@9 string_constant  */
#line 133 "parser1.y"
                                                                              { insert_value(); }
#line 1523 "parser1.tab.c"
    break;

  case 38: /* $@10: %empty  */
#line 136 "parser1.y"
                             {strcpy(previous_operator,"=");}
#line 1529 "parser1.tab.c"
    break;

  case 69: /* function_datatype: datatype identifier '('  */
#line 178 "parser1.y"
                                                   {strcpy(currfunctype, current_type); check_duplicate(current_identifier); insert_SymbolTable_function(current_identifier);  strcpy(current_function,current_identifier); insert_type();}
#line 1535 "parser1.tab.c"
    break;

  case 71: /* $@11: %empty  */
#line 184 "parser1.y"
                                   { check_params(current_type); }
#line 1541 "parser1.tab.c"
    break;

  case 72: /* parameters: datatype $@11 all_parameter_identifiers  */
#line 184 "parser1.y"
                                                                                             {insert_SymbolTable_paramscount(current_function, params_count);}
#line 1547 "parser1.tab.c"
    break;

  case 77: /* $@12: %empty  */
#line 194 "parser1.y"
                                     {insert_parameters(); insert_type(); insert_SymbolTable_nest(current_identifier,1); params_count++;}
#line 1553 "parser1.tab.c"
    break;

  case 88: /* $@13: %empty  */
#line 207 "parser1.y"
                         {current_nested_val++;}
#line 1559 "parser1.tab.c"
    break;

  case 89: /* multiple_statement: $@13 '{' statments '}'  */
#line 207 "parser1.y"
                                                                   {remove_scope(current_nested_val);current_nested_val--;}
#line 1565 "parser1.tab.c"
    break;

  case 94: /* $@14: %empty  */
#line 218 "parser1.y"
                                                       {if(yyvsp[-1]!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
#line 1571 "parser1.tab.c"
    break;

  case 98: /* $@15: %empty  */
#line 225 "parser1.y"
                                                         {if(yyvsp[-1]!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
#line 1577 "parser1.tab.c"
    break;

  case 100: /* $@16: %empty  */
#line 226 "parser1.y"
                                                                           {if(yyvsp[-1]!=1){yyerror("Here, condition must have integer value!\n");exit(0);}}
#line 1583 "parser1.tab.c"
    break;

  case 102: /* $@17: %empty  */
#line 227 "parser1.y"
                                                                       {if(yyvsp[-1]!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
#line 1589 "parser1.tab.c"
    break;

  case 107: /* return_statement: RETURN ';'  */
#line 235 "parser1.y"
                                     {if(strcmp(currfunctype,"void")) {yyerror("ERROR: Cannot have void return for non-void function!\n"); exit(0);}}
#line 1595 "parser1.tab.c"
    break;

  case 108: /* return_statement: RETURN expression ';'  */
#line 236 "parser1.y"
                                                { 	if(!strcmp(currfunctype, "void"))
										{
											yyerror("Non-void return for void function!"); exit(0);
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && yyvsp[-1]!=1)
										{
											yyerror("Expression doesn't match return type of function\n"); exit(0);
										}

			                     	}
#line 1611 "parser1.tab.c"
    break;

  case 110: /* expression: mutable '=' expression  */
#line 253 "parser1.y"
                                                              {					strcpy(previous_operator,"=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
																	  {
			                                                          yyval=1;
			                                                          }
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1624 "parser1.tab.c"
    break;

  case 111: /* expression: mutable ADD_EQUAL expression  */
#line 261 "parser1.y"
                                                           {					strcpy(previous_operator,"+=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1635 "parser1.tab.c"
    break;

  case 112: /* expression: mutable SUBTRACT_EQUAL expression  */
#line 267 "parser1.y"
                                                             {					strcpy(previous_operator,"-=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1646 "parser1.tab.c"
    break;

  case 113: /* expression: mutable MULTIPLY_EQUAL expression  */
#line 274 "parser1.y"
                                                            {					strcpy(previous_operator,"*=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1657 "parser1.tab.c"
    break;

  case 114: /* expression: mutable DIVIDE_EQUAL expression  */
#line 280 "parser1.y"
                                                                        {				strcpy(previous_operator,"/=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1668 "parser1.tab.c"
    break;

  case 115: /* expression: mutable MOD_EQUAL expression  */
#line 286 "parser1.y"
                                                                {					strcpy(previous_operator,"%=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1679 "parser1.tab.c"
    break;

  case 116: /* expression: mutable INCREMENT  */
#line 293 "parser1.y"
                                                                                                {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 1685 "parser1.tab.c"
    break;

  case 117: /* expression: mutable DECREMENT  */
#line 294 "parser1.y"
                                                                                                {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 1691 "parser1.tab.c"
    break;

  case 118: /* expression: simple_expression  */
#line 295 "parser1.y"
                                            {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1697 "parser1.tab.c"
    break;

  case 119: /* simple_expression: simple_expression OR_OR and_expression  */
#line 299 "parser1.y"
                                                                 {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else {yyval=-1 ;yyerror("Type Mismatch\n"); exit(0);}}
#line 1703 "parser1.tab.c"
    break;

  case 120: /* simple_expression: and_expression  */
#line 300 "parser1.y"
                                         {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1709 "parser1.tab.c"
    break;

  case 121: /* and_expression: and_expression AND_AND unary_relation_expression  */
#line 303 "parser1.y"
                                                                           {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else {yyval=-1;yyerror("Type Mismatch\n"); exit(0);}}
#line 1715 "parser1.tab.c"
    break;

  case 122: /* and_expression: unary_relation_expression  */
#line 304 "parser1.y"
                                                     {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1721 "parser1.tab.c"
    break;

  case 123: /* unary_relation_expression: NOT unary_relation_expression  */
#line 307 "parser1.y"
                                                        {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1727 "parser1.tab.c"
    break;

  case 124: /* unary_relation_expression: regular_expression  */
#line 308 "parser1.y"
                                             {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1733 "parser1.tab.c"
    break;

  case 125: /* regular_expression: regular_expression relational_operators sum_expression  */
#line 311 "parser1.y"
                                                                                 {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else {yyval=-1;yyerror("Type Mismatch\n"); exit(0);}}
#line 1739 "parser1.tab.c"
    break;

  case 126: /* regular_expression: sum_expression  */
#line 312 "parser1.y"
                                           {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1745 "parser1.tab.c"
    break;

  case 127: /* relational_operators: GREAT_EQUAL  */
#line 315 "parser1.y"
                                     {strcpy(previous_operator,">=");}
#line 1751 "parser1.tab.c"
    break;

  case 128: /* relational_operators: LESS_EQUAL  */
#line 316 "parser1.y"
                                    {strcpy(previous_operator,"<=");}
#line 1757 "parser1.tab.c"
    break;

  case 129: /* relational_operators: GREAT  */
#line 317 "parser1.y"
                               {strcpy(previous_operator,">");}
#line 1763 "parser1.tab.c"
    break;

  case 130: /* relational_operators: LESS  */
#line 318 "parser1.y"
                              {strcpy(previous_operator,"<");}
#line 1769 "parser1.tab.c"
    break;

  case 131: /* relational_operators: EQUAL  */
#line 319 "parser1.y"
                               {strcpy(previous_operator,"==");}
#line 1775 "parser1.tab.c"
    break;

  case 132: /* relational_operators: NOT_EQUAL  */
#line 320 "parser1.y"
                                   {strcpy(previous_operator,"!=");}
#line 1781 "parser1.tab.c"
    break;

  case 133: /* sum_expression: sum_expression sum_operators term  */
#line 323 "parser1.y"
                                                             {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else {yyval=-1;yyerror("Type Mismatch\n"); exit(0);}}
#line 1787 "parser1.tab.c"
    break;

  case 134: /* sum_expression: term  */
#line 324 "parser1.y"
                               {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1793 "parser1.tab.c"
    break;

  case 137: /* term: term MULOP factor  */
#line 331 "parser1.y"
                                            {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}}
#line 1799 "parser1.tab.c"
    break;

  case 138: /* term: factor  */
#line 332 "parser1.y"
                                 {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1805 "parser1.tab.c"
    break;

  case 142: /* factor: immutable  */
#line 338 "parser1.y"
                                    {if(yyvsp[0] == 1) yyval=1; else {yyval=-1;yyerror("Type Mismatch\n"); exit(0);}}
#line 1811 "parser1.tab.c"
    break;

  case 143: /* factor: mutable  */
#line 339 "parser1.y"
                                  {if(yyvsp[0] == 1) yyval=1; else {yyval=-1;yyerror("Type Mismatch\n"); exit(0);}}
#line 1817 "parser1.tab.c"
    break;

  case 144: /* mutable: identifier  */
#line 342 "parser1.y"
                                     {
			              if(!check_scope(current_identifier))
			              {printf("%s\n",current_identifier);yyerror("Identifier undeclared\n");exit(0);}
			              if(!check_array(current_identifier))
			              {printf("%s\n",current_identifier);yyerror("Array Identifier has No Subscript\n");exit(0);}
			              if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
			              yyval = 1;
			              else
			              yyval = -1;
			              }
#line 1832 "parser1.tab.c"
    break;

  case 145: /* $@18: %empty  */
#line 352 "parser1.y"
                                           {if(!check_scope(current_identifier)){printf("%s\n",current_identifier);yyerror("Identifier undeclared\n");exit(0);}}
#line 1838 "parser1.tab.c"
    break;

  case 146: /* mutable: array_identifier $@18 '[' expression ']'  */
#line 353 "parser1.y"
                                           {if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
			              		yyval = 1;
			              		else
			              		yyval = -1;
			              		}
#line 1848 "parser1.tab.c"
    break;

  case 147: /* immutable: '(' expression ')'  */
#line 360 "parser1.y"
                                             {if(yyvsp[-1]==1) yyval=1; else yyval=-1;}
#line 1854 "parser1.tab.c"
    break;

  case 149: /* immutable: constant  */
#line 362 "parser1.y"
                                   {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1860 "parser1.tab.c"
    break;

  case 150: /* $@19: %empty  */
#line 365 "parser1.y"
                                        { strcpy(previous_operator,"(");
			             if(!check_declaration(current_identifier, "Function"))
			             { yyerror("Function not declared"); exit(0);}
			             insert_SymbolTable_function(current_identifier);
						 strcpy(currfunccall,current_identifier);
			             }
#line 1871 "parser1.tab.c"
    break;

  case 151: /* call: identifier '(' $@19 arguments ')'  */
#line 371 "parser1.y"
                                                 { if(strcmp(currfunccall,"printf"))
							{
								if(getSTparamscount(currfunccall)!=call_params_count)
								{
									yyerror("Number of parameters not same as number of arguments during function call!");
									//printf("Number of arguments in function call %s doesn't match number of parameters\n", currfunccall);
									exit(8);
								}
							}
						 }
#line 1886 "parser1.tab.c"
    break;

  case 154: /* $@20: %empty  */
#line 386 "parser1.y"
                                     { call_params_count++; }
#line 1892 "parser1.tab.c"
    break;

  case 156: /* $@21: %empty  */
#line 389 "parser1.y"
                                         { call_params_count++; }
#line 1898 "parser1.tab.c"
    break;

  case 159: /* constant: integer_constant  */
#line 393 "parser1.y"
                                                {  insert_type(); yyval=1; }
#line 1904 "parser1.tab.c"
    break;

  case 160: /* constant: string_constant  */
#line 394 "parser1.y"
                                                {  insert_type(); yyval=-1;}
#line 1910 "parser1.tab.c"
    break;

  case 161: /* constant: float_constant  */
#line 395 "parser1.y"
                                                {  insert_type(); yyval=1;}
#line 1916 "parser1.tab.c"
    break;

  case 162: /* constant: character_constant  */
#line 396 "parser1.y"
                                            {  insert_type();yyval=1; }
#line 1922 "parser1.tab.c"
    break;


#line 1926 "parser1.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 399 "parser1.y"


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

int yywrap()
{
	return 1;
}
