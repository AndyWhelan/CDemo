#include<stdio.h>

#define IN 	1	// inside a word
#define OUT 	0	// outside a word

/* print input one word per line */
int main(){
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while((c=getchar())!=EOF){
		++nc;
		putchar(c);
		if(c == '\n')
			++nl;
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			putchar('\n');
		}
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n",nl,nw,nc);
}
