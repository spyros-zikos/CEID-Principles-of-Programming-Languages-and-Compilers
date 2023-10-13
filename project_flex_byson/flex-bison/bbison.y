%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


extern int yylex();
extern int yyparse();
extern FILE* yyin;

extern int counter;
FILE * fp;

char fname[50];

void yyerror(const char* s);
%}

%union {
	unsigned int intval;
	char* strval;
}


%token T_NEWLINE
%token T_INT ATTSTR ATTINT
%token T_STR
%token T_LinearLayout1 T_LinearLayout2 T_RelativeLayout1 T_RelativeLayout2 
%token T_RadioGroup1 T_RadioGroup2 
%token T_TextView T_ImageView T_RadioButton T_Button T_ProgressBar 
%token T_EndTag1 T_EndTag2
%token T_Android T_Width T_Height T_Id T_Orientation T_TextColor 
%token T_Padding T_CheckedButton T_Max
%token T_Progress T_Text T_Src T_Rnum



%type root

%start root

%%


root:  comment padding T_LinearLayout1 nline AL padding T_EndTag1 comment padding T1 padding T_LinearLayout2 comment
	| comment padding T_RelativeLayout1 nline AR T_EndTag1 comment padding T1 padding T_RelativeLayout2 comment
	| comment padding T_RelativeLayout1 nline AR T_EndTag2 comment
	;


textview: T_TextView nline AT padding T_EndTag2 ;
imageview: T_ImageView nline AI padding T_EndTag2 ;
radiobutton: T_RadioButton nline ARB padding T_EndTag2 ;
button: T_Button nline AB padding T_EndTag2 ;
progressbar: T_ProgressBar nline APB padding T_EndTag2 ;

buttonss: comment padding radiobutton buttonss | comment padding radiobutton comment padding ;

radiogroup: T_RadioGroup1 nline ARG padding T_EndTag1 buttonss T_RadioGroup2 ;

T1: T2 | T1 T2 ;


T2: root | comment padding radiogroup | comment padding imageview | comment padding textview | comment padding button | comment padding progressbar ;

comment: padding | padding T_STR comment ;

mandatory: T_Android T_Width values NA T_Height values | T_Android T_Height values NA T_Width values ;

NA: nline T_Android ;


Aid: NA T_Id ATTSTR;
Aor: NA T_Orientation ATTSTR;
Atc: NA T_TextColor ATTSTR;
Ap: NA T_Padding ATTINT;
Acb: NA T_CheckedButton ATTSTR;
Amax: NA T_Max ATTINT;
Aprog: NA T_Progress ATTINT;

AL: mandatory Aid Aor | mandatory Aor Aid | mandatory Aor padding| mandatory Aid padding| mandatory padding;
AR: mandatory Aid | mandatory padding;

AT: mandatory NA T_Text ATTSTR Aid Atc | mandatory NA T_Text ATTSTR Aid padding | mandatory NA T_Text ATTSTR Atc padding | 
    mandatory NA T_Text ATTSTR Atc Aid | mandatory NA T_Text ATTSTR padding |
    mandatory Aid NA T_Text ATTSTR Atc | mandatory Aid NA T_Text ATTSTR padding |
    mandatory Atc NA T_Text ATTSTR Aid | mandatory Atc NA T_Text ATTSTR padding |
    mandatory Aid Atc NA T_Text ATTSTR | 
    mandatory Atc Aid NA T_Text ATTSTR ;

AI: mandatory NA T_Src ATTSTR Aid Ap | mandatory NA T_Src ATTSTR Aid padding | mandatory NA T_Src ATTSTR Ap padding |
    mandatory NA T_Src ATTSTR Ap Aid | mandatory NA T_Src ATTSTR padding |
    mandatory Aid NA T_Src ATTSTR Ap | mandatory Aid NA T_Src ATTSTR padding |
    mandatory Ap NA T_Src ATTSTR Aid | mandatory Ap NA T_Src ATTSTR padding |
    mandatory Aid Ap NA T_Src ATTSTR | 
    mandatory Ap Aid NA T_Src ATTSTR ;

AB: mandatory NA T_Text ATTSTR Aid Ap | mandatory NA T_Text ATTSTR Aid padding | mandatory NA T_Text ATTSTR Ap padding |
    mandatory NA T_Text ATTSTR Ap Aid | mandatory NA T_Text ATTSTR padding |
    mandatory Aid NA T_Text ATTSTR Ap | mandatory Aid NA T_Text ATTSTR padding |
    mandatory Ap NA T_Text ATTSTR Aid | mandatory Ap NA T_Text ATTSTR padding |
    mandatory Aid Ap NA T_Text ATTSTR | 
    mandatory Ap Aid NA T_Text ATTSTR ;

ARB: mandatory NA T_Id ATTSTR NA T_Text ATTSTR | mandatory NA T_Text ATTSTR NA T_Id ATTSTR;

ARG: mandatory NA T_Rnum ATTINT Aid Acb | mandatory NA T_Rnum ATTINT Aid padding | mandatory NA T_Rnum ATTINT Acb padding|
     mandatory NA T_Rnum ATTINT Acb Aid | mandatory NA T_Rnum ATTINT padding |
     mandatory Aid NA T_Rnum ATTINT Acb | mandatory Aid NA T_Rnum ATTINT padding |
     mandatory Acb NA T_Rnum ATTINT Aid | mandatory Acb NA T_Rnum ATTINT padding |
     mandatory Aid Acb NA T_Rnum ATTINT | 
     mandatory Acb Aid NA T_Rnum ATTINT ;

APB: mandatory APBComb | mandatory padding;
APBComb: Aid Amax Aprog | Aid Amax padding | Aid Aprog padding | Amax Aprog padding | 
     Amax Aid Aprog | Aid padding | Amax padding | Aprog padding | Amax Aid padding |
     Aid Aprog Amax | Aprog Amax padding |
     Amax Aprog Aid | Aprog Aid padding |
     Aprog Amax Aid |
     Aprog Aid Amax ;



values: ATTINT | ATTSTR ;

nline: T_NEWLINE | T_NEWLINE nline ;
padding:  | T_NEWLINE padding ;


%%

void prpr() {
	fp = fopen(fname, "r");
	char c = fgetc(fp);
    	while (c != EOF) {
        	printf ("%c", c);
        	c = fgetc(fp);
    	}
    	fclose(fp);

}

int main(int argc, char *argv[]) {
	strcpy(fname, argv[1]);
	yyin = fopen (argv[1], "r");
	yyparse();

	printf("\n--------------\n");
	prpr();
	printf("\n--------------\n");
	printf("SUCCESS!!!\n");

	return 0;
}

void yyerror(const char* s) {
	
	//system("cls");
	printf("\n--------------\n");
	prpr();
	printf("\n--------------");
	printf("\n%s in line %d\n\n  -->  ", s, counter+1);

	fp = fopen(fname, "r");
	char ch = fgetc(fp);
	int flag = 0;
    	while (ch != EOF) {
		if (flag == counter) printf ("%c", ch);
		if (ch == '\n') flag++;
        	ch = fgetc(fp);
    	}
    	fclose(fp);

	exit(1);
}