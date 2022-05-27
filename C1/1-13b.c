#include<stdio.h>

#define IN 	1	// inside a word
#define OUT 	0	// outside a word
#define MAXWLEN	30	// max word length - susceptible to the Mary Poppins bug
#define MAXFREQ	40	// max frequency of word with given length (e.g. word of length 4 cannot occur more than 40 times, if MAXFREQ is set to 40)
#define FILLER	'*'	// character to fill the histogram

/* print vertical histogram of length of words in input */
int main(){
	int
		c,
		state 			= IN,
		thisWordLen 		= 0,
		wordLen[MAXWLEN]	= {0};
	char
		wordLenVert[MAXWLEN][MAXFREQ];

	// determine when inside and outside a word, keeping track of the length
	while((c=getchar())!=EOF){
		if(c == ' ' || c == '\n' || c == '\t'){
			state=OUT;
		//	for debugging:	printf("Char: space,newline or tab. thisWordLen=%d, state=OUT\n",thisWordLen);
		}
		else if(state==OUT){
			state=IN;
			++wordLen[thisWordLen];
		//	for debugging:	printf("Char: %c. thisWordLen=%d,to go to 0, state=IN,start.\n",c,thisWordLen);
			thisWordLen=1;
		}
		else if(state==IN){
			++thisWordLen;
		//	for debugging:	printf("Char: %c. thisWordLen=%d, state=IN\n",c,thisWordLen);
		}
	}
	++wordLen[thisWordLen];

	//fill up the array
	for(int wl=1; wl<=MAXWLEN;wl++){
		thisWordLen=wordLen[wl];
		for(int wlF=1;wlF<=MAXFREQ;wlF++){
			if(wlF<=thisWordLen)
				wordLenVert[wl][wlF]=FILLER;
			else
				wordLenVert[wl][wlF]=' ';
		}
	}

	//print the histogram, vertically
	for(int wlF = MAXFREQ;wlF>0;wlF--){
		for(int wl=1; wl<MAXWLEN;wl++){
			printf("%-4c ",wordLenVert[wl][wlF]);
		}
		printf("\n");
	}
	for(int wl=1; wl<MAXWLEN;wl++){
		printf("%-4d ",wl);
	}
	printf("\n");

}
