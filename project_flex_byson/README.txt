PROJECT TITLE: Flex and Bison

PURPOSE OF PROJECT: Make a program that recognizes a subset of the xml language using flex and bison.

DATE: Jun 2023

AUTHORS: Spyros, Kallinikos

-------------------------------------------------------------------------------------------------
USER INSTRUCTIONS:

For input we use the file "file.txt" which is inside the "tests" directory. We will use the following commands to execute and test our code. You can use other files from "tests" directory and change the following commands accordingly.


#1
To run the final excecutable:
add the file "file.txt" in "c_h_exe_files" directory
and excecute: 
	`./myParser.exe file.txt`

from any command line (windows or linux).


#2
Alternatively add the file "file.txt" in "flex-bison" directory
and excecute from the (linux) command line one of the following commands: 

	`bison -d bbison.y; flex fflex.l; gcc -o myParser.exe lex.yy.c bbison.tab.c; ./myParser.exe file.txt`

OR

	`make; ./myParser.exe file.txt`


#3
To clean "flex-bison" directory excecute from the (linux) command line the command:
	`make clean`

Caution: Cleans "file.txt" also.


Note:
Used Cygwin: version 2.925