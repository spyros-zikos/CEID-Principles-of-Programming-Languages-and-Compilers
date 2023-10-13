/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_BBISON_TAB_H_INCLUDED
# define YY_YY_BBISON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_NEWLINE = 258,               /* T_NEWLINE  */
    T_INT = 259,                   /* T_INT  */
    ATTSTR = 260,                  /* ATTSTR  */
    ATTINT = 261,                  /* ATTINT  */
    T_STR = 262,                   /* T_STR  */
    T_LinearLayout1 = 263,         /* T_LinearLayout1  */
    T_LinearLayout2 = 264,         /* T_LinearLayout2  */
    T_RelativeLayout1 = 265,       /* T_RelativeLayout1  */
    T_RelativeLayout2 = 266,       /* T_RelativeLayout2  */
    T_RadioGroup1 = 267,           /* T_RadioGroup1  */
    T_RadioGroup2 = 268,           /* T_RadioGroup2  */
    T_TextView = 269,              /* T_TextView  */
    T_ImageView = 270,             /* T_ImageView  */
    T_RadioButton = 271,           /* T_RadioButton  */
    T_Button = 272,                /* T_Button  */
    T_ProgressBar = 273,           /* T_ProgressBar  */
    T_EndTag1 = 274,               /* T_EndTag1  */
    T_EndTag2 = 275,               /* T_EndTag2  */
    T_Android = 276,               /* T_Android  */
    T_Width = 277,                 /* T_Width  */
    T_Height = 278,                /* T_Height  */
    T_Id = 279,                    /* T_Id  */
    T_Orientation = 280,           /* T_Orientation  */
    T_TextColor = 281,             /* T_TextColor  */
    T_Padding = 282,               /* T_Padding  */
    T_CheckedButton = 283,         /* T_CheckedButton  */
    T_Max = 284,                   /* T_Max  */
    T_Progress = 285,              /* T_Progress  */
    T_Text = 286,                  /* T_Text  */
    T_Src = 287,                   /* T_Src  */
    T_Rnum = 288                   /* T_Rnum  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "bbison.y"

	unsigned int intval;
	char* strval;

#line 102 "bbison.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BBISON_TAB_H_INCLUDED  */
