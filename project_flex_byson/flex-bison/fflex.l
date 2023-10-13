%option noyywrap


%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define YY_DECL int yylex()

#include "bbison.tab.h"
int counter = 0;
int idflag = 0;
int i = 0;
char ids[10000][50];

int height_flag = 0;
int width_flag = 0;

int cb_flag = 0;
char checkbutton[50] = "";
char buttonids[10000][50];
int j = 0;
int error_cb = 0;

int progress_bar = 0;
int max_progress = -2;
int progress = -2;
int error_progress = 0;

int radionum = 0;
int radionumattr = 0;
int radionum_flag = 0;
int error_radionum = 0;

int search_id(char * c);
char * plaintxt(char * txt);

void yyerror(const char* s);

%}

%%
\t		;
[ \n]		{(strcmp(yytext," ")?(counter++):(counter+=0)); return T_NEWLINE;}


"<LinearLayout"		{return T_LinearLayout1;}
"</LinearLayout>"	{return T_LinearLayout2;}
"<RelativeLayout"	{return T_RelativeLayout1;}
"</RelativeLayout>"	{return T_RelativeLayout2;}
"<RadioGroup"		{radionum = 0; return T_RadioGroup1;}
"</RadioGroup>"		{ if (radionum_flag == -1)
				if (radionum!=radionumattr) {
					counter = error_radionum;
					yyerror("incorrect number of radiobuttons");
				}
			int valid = 0;
			for (int k=0; k<j; k++) 
				if (!strcmp(checkbutton, buttonids[k]))
					valid = 1;	
			if (valid!=1 && cb_flag==1) {
				counter = error_cb;
				yyerror("incorrect checkedbutton error");
			}
			j=0;
			cb_flag=0;
			return T_RadioGroup2;}

"<TextView"		{return T_TextView;}
"<ImageView"		{return T_ImageView;}
"<RadioButton"		{radionum++; return T_RadioButton;}
"<Button"		{return T_Button;}
"<ProgressBar"		{progress_bar=1; return T_ProgressBar;}

">"			{return T_EndTag1;}
"/>"			{if (progress_bar == 1) {
				if(max_progress >= 0 && progress >= 0)
					if (max_progress<progress) {
						counter = error_progress;
						yyerror("incorrect progress value error");
					}
			progress_bar = 0;
			max_progress = -2;
			progress = -2;

			}


return T_EndTag2;}

"android:"      	{return T_Android;}

"layout_width="  	{width_flag=1; return T_Width;}
"layout_height=" 	{height_flag=1; return T_Height;}

"id=" 			{idflag=1;return T_Id;}
"orientation=" 		{return T_Orientation;}
"textColor=" 		{return T_TextColor;}
"padding=" 		{return T_Padding;}
"checkedButton=" 	{error_cb=counter; cb_flag = 1; return T_CheckedButton;}
"max=" 			{max_progress=-1; return T_Max;}
"progress=" 		{error_progress=counter; progress=-1; return T_Progress;}
"text=" 		{return T_Text;}
"src=" 			{return T_Src;}
"radioButtonNo="	{error_radionum = counter; radionum_flag = 1; return T_Rnum;}


\"[0-9]+\"		{height_flag = 0;
			width_flag = 0;
			if (max_progress == -1) 
				max_progress = atoi(plaintxt(yytext));
			if (progress == -1)
				progress = atoi(plaintxt(yytext));
			if (radionum_flag==1) {
				radionumattr = atoi(plaintxt(yytext));
				radionum_flag = -1;
			}
			return ATTINT;}

\"[^\"]+\"		{if (idflag==1) {
				if (search_id(yytext)) 
					yyerror("id error");
				strcpy(ids[i], yytext); i++;
				idflag=0;
				if (cb_flag == 1) {
					strcpy(buttonids[j], yytext); j++;
				}
			}
			else if (height_flag || width_flag) {
				if (strcmp(yytext,"\"wrap_content\"") && strcmp(yytext, "\"match_parent\""))
					yyerror("incorrect value error");
				height_flag = 0;
				width_flag = 0;
			}
			else if (cb_flag == 1 && !strcmp(checkbutton,"")) 
				strcpy(checkbutton, yytext);

			return ATTSTR;}

"<!--"([^-]|-[^-])*"-->"   	{return T_STR;}

. { yyerror("syntax error");}


%%
int search_id(char c[]) {
	if (i==0) 
		return 0;
	for(int k=0; k<i; k++) {
		if (!(strcmp(c, ids[k])))
			return 1;
	}
	return 0;
}
char * plaintxt(char * txt) {
	char * result = strtok(txt, "\"");
	return result;
}