.PHONY: all clean test gitlog

all: assignment-1

assignment-1: assignment-1.c
	${CC} -std=c99 -g assignment-1.c -o assignment-1
	
test: assignment-1 gitlog
	./test.sh

gitlog:
	git log -p > gitlog.txt
	
clean:
	-${RM} assignment-1