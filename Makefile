CFLAGS=-Wall -g -lm

clean:
	rm -f TestH1SortsV1
	rm -f H1SortsV1
	
all:
	gcc -o H1SortsV1 H1SortsV1.c Sorts.h Sorts.c
	gcc -o TestH1SortsV1 TestH1SortsV1.c Sorts.h Sorts.c