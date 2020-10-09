CC = g++
CCFLAGS = -O3 -Ofast -W -Wall

FLEX = flex
FLEX_OPTS = -Psat

BISON = bison
BISON_OPTS = -t -psat

OBJS = Absyn.o Lexer.o Parser.o Printer.o

.PHONY: clean distclean

all: Testsat tester

clean:
	rm -f *.o sat-solver sat.aux sat.log sat.pdf sat.dvi sat.ps sat tester *.hi

# distclean: clean
# 	rm -f Absyn.C Absyn.H Test.C Parser.C Parser.H Lexer.C Skeleton.C Skeleton.H Printer.C Printer.H Makefile sat.l sat.y sat.tex 

tester: Tester.hs
	ghc -o tester Tester.hs

Testsat: ${OBJS} Test.o
	@echo "Linking Testsat..."
	${CC} ${CCFLAGS} ${OBJS} Test.o -o sat-solver

Absyn.o: Absyn.C Absyn.H
	${CC} ${CCFLAGS} -c Absyn.C

# Lexer.C: sat.l
# 	${FLEX} -oLexer.C sat.l

# Parser.C: sat.y
# 	${BISON} sat.y -o Parser.C

Lexer.o: Lexer.C Parser.H
	${CC} ${CCFLAGS} -c Lexer.C

Parser.o: Parser.C Absyn.H
	${CC} ${CCFLAGS} -c Parser.C

Printer.o: Printer.C Printer.H Absyn.H
	${CC} ${CCFLAGS} -c Printer.C

Skeleton.o: Skeleton.C Skeleton.H Absyn.H
	${CC} ${CCFLAGS} -c Skeleton.C

Test.o: Test.C Parser.H Printer.H Absyn.H
	${CC} ${CCFLAGS} -c Test.C

