all: myParser 

bbison.tab.c bbison.tab.h: bbison.y
	bison -t -v -d bbison.y

lex.yy.c: fflex.l bbison.tab.h
	flex fflex.l

myParser: lex.yy.c bbison.tab.c bbison.tab.h
	gcc -o myParser bbison.tab.c lex.yy.c

clean:
	rm myParser bbison.tab.c lex.yy.c bbison.tab.h bbison.output *.txt

