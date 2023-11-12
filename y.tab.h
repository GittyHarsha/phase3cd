/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     INT = 259,
     CHAR = 260,
     FLOAT = 261,
     DOUBLE = 262,
     LONG = 263,
     SHORT = 264,
     SIGNED = 265,
     UNSIGNED = 266,
     STRUCT = 267,
     RETURN = 268,
     MAIN = 269,
     VOID = 270,
     WHILE = 271,
     FOR = 272,
     DO = 273,
     BREAK = 274,
     CONTINUE = 275,
     GOTO = 276,
     ENDIF = 277,
     SWITCH = 278,
     CASE = 279,
     DEFAULT = 280,
     identifier = 281,
     array_identifier = 282,
     integer_constant = 283,
     string_constant = 284,
     float_constant = 285,
     character_constant = 286,
     ELSE = 287,
     MOD_EQUAL = 288,
     DIVIDE_EQUAL = 289,
     MULTIPLY_EQUAL = 290,
     SUBTRACT_EQUAL = 291,
     ADD_EQUAL = 292,
     OR_OR = 293,
     AND_AND = 294,
     NOT_EQUAL = 295,
     EQUAL = 296,
     GREAT = 297,
     GREAT_EQUAL = 298,
     LESS = 299,
     LESS_EQUAL = 300,
     SIZEOF = 301,
     NOT = 302,
     DECREMENT = 303,
     INCREMENT = 304
   };
#endif
/* Tokens.  */
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define LONG 263
#define SHORT 264
#define SIGNED 265
#define UNSIGNED 266
#define STRUCT 267
#define RETURN 268
#define MAIN 269
#define VOID 270
#define WHILE 271
#define FOR 272
#define DO 273
#define BREAK 274
#define CONTINUE 275
#define GOTO 276
#define ENDIF 277
#define SWITCH 278
#define CASE 279
#define DEFAULT 280
#define identifier 281
#define array_identifier 282
#define integer_constant 283
#define string_constant 284
#define float_constant 285
#define character_constant 286
#define ELSE 287
#define MOD_EQUAL 288
#define DIVIDE_EQUAL 289
#define MULTIPLY_EQUAL 290
#define SUBTRACT_EQUAL 291
#define ADD_EQUAL 292
#define OR_OR 293
#define AND_AND 294
#define NOT_EQUAL 295
#define EQUAL 296
#define GREAT 297
#define GREAT_EQUAL 298
#define LESS 299
#define LESS_EQUAL 300
#define SIZEOF 301
#define NOT 302
#define DECREMENT 303
#define INCREMENT 304




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

