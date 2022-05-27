#include<stdio.h>

#define IN 	1	// inside a word
#define OUT 	0	// outside a word
#define MAXWLEN	30	// max word length - susceptible to the Mary Poppins bug

/* print histogram of length of words in input */
int main(){
	int c, nl, nw, nc, state, thisWordLen;
	int wordLen[MAXWLEN] = {0};	//initialize each entry to 0

	state = OUT;
	nl = nw = nc = thisWordLen = 0;

	while((c=getchar())!=EOF){
		++nc;
		++thisWordLen;
		putchar(c);
		if(c == '\n')
			++nl;
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			putchar('\n');
			--thisWordLen;
		}
		else if (state == OUT) {
			state = IN;
			++nw;
			++wordLen[thisWordLen];
			thisWordLen=0;
		}
	}

	//print the histogram
	printf("\n");
	for(int wl = 1; wl<=MAXWLEN;wl++){
		printf("%3d:",wl);
		for(int fills=0;fills<wordLen[wl];fills++)
			printf("-");
		printf("\n");
	}
}
