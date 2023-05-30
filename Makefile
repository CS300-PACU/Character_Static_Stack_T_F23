#############################################################################
# File name:  Makefile
# Author:     chadd williams
# Date:       Sept 1, 2021
# Class:      CS360
# Assignment: 
# Purpose:    
#############################################################################

# variables
CFLAGS=-g -Wall
VALGRIND_FLAGS=-v --leak-check=yes --track-origins=yes --leak-check=full --show-leak-kinds=all
ENSCRIPT_FLAGS=-C -T 2 -p - -M Letter --color -fCourier8
TARGETS=bin/stktester bin/stkdriver

all: bin ${TARGETS}

bin:
	mkdir -p bin

bin/stktester: bin bin/stktester.o bin/stk.o
	gcc -o bin/stktester ${CFLAGS} bin/stktester.o bin/stk.o

bin/stktester.o: src/stktester.c include/stk.h
	gcc -c -o bin/stktester.o ${CFLAGS}  src/stktester.c

bin/stkdriver: bin bin/stkdriver.o bin/stk.o
	gcc -o bin/stkdriver ${CFLAGS}  bin/stkdriver.o bin/stk.o

bin/stkdriver.o: src/stkdriver.c include/stk.h
	gcc -c -o bin/stkdriver.o ${CFLAGS}  src/stkdriver.c

bin/stk.o: src/stk.c include/stk.h
	gcc -c -o bin/stk.o ${CFLAGS}  src/stk.c

valgrind: bin/stkdriver
	valgrind ${VALGRIND_FLAGS} bin/stkdriver

printAll:
	enscript ${ENSCRIPT_FLAGS} -Emakefile  Makefile  | ps2pdf - bin/Makefile.pdf
	enscript ${ENSCRIPT_FLAGS} -Ec src/stk.c  | ps2pdf - bin/stk.pdf
	enscript ${ENSCRIPT_FLAGS} -Ec src/stkdriver.c  | ps2pdf - bin/stkdriver.pdf
	enscript ${ENSCRIPT_FLAGS} -Ec src/stktester.c  | ps2pdf - bin/stktester.pdf
	pdfunite bin/stk.pdf bin/stkdriver.pdf bin/stktester.pdf bin/Makefile.pdf bin/${USER}_stk.pdf
	@echo
	@echo File produced: bin/${USER}_stk.pdf
	@echo
	@ls -l bin/${USER}_stk.pdf
	@echo

clean:
	rm -f ${TARGETS} bin/*.o bin/*.pdf
