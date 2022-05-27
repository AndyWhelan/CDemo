#include<stdio.h>

#define ALPHABETLEN 	27	// max word length - susceptible to the Mary Poppins bug
#define MAXFREQ		40	// max frequency of word with given length (e.g. word of length 4 cannot occur more than 40 times, if MAXFREQ is set to 40)
#define FILLER		'*'	// character to fill the histogram
#define ASCIIBIGSTART	65
#define ASCIIBIGEND	90
#define ASCIISMALLSTART	97
#define ASCIISMALLEND	122
#define	WHITESPACELINES	3	// number of whitespace lines between histogram and text

char toLowerCase(char);	// converts a character to lowercase if it is uppercase.

/* print vertical histogram of frequencies of different characters in input */
int main(){
	int
		c,
		thisWordLen 		= 0,
		wordLen[ALPHABETLEN]	= {0},
		maxActualFreq		= 0;
	char
		wordLenVert[ALPHABETLEN][MAXFREQ];

	while((c=getchar())!=EOF){
		if( (c>=ASCIIBIGSTART && c<=ASCIIBIGEND) || (c>=ASCIISMALLSTART && c<=ASCIISMALLEND) ){
			c=toLowerCase(c);
			++wordLen[c-ASCIISMALLSTART];
		}
	}

	//fill up the array
	for(int wl=0; wl<ALPHABETLEN;wl++){
		thisWordLen=wordLen[wl];
		if(maxActualFreq<thisWordLen)
			maxActualFreq=thisWordLen;
		for(int wlF=0;wlF<MAXFREQ;wlF++){
			if(wlF==0)
				wordLenVert[wl][wlF]=' ';
			else if(wlF<=thisWordLen)
				wordLenVert[wl][wlF]=FILLER;
			else
				wordLenVert[wl][wlF]=' ';
		}
	}

	//print the histogram, vertically
	for(int i = 0; i< WHITESPACELINES; i++)
		printf("\n");
	for(int wlF = maxActualFreq;wlF>0;wlF--){
		for(int wl=0; wl<ALPHABETLEN;wl++){
			printf("%-4c ",wordLenVert[wl][wlF]);
		}
		printf("\n");
	}
	for(int wl=0; wl<ALPHABETLEN-1;wl++){
		printf("%-4c ",wl+ASCIISMALLSTART);
	}
	printf("\n");

	return 0;

}

char toLowerCase(char c){
	if(c>=ASCIIBIGSTART && c<=ASCIIBIGEND)
		return c+(ASCIISMALLSTART-ASCIIBIGSTART);
	else
		return c;
}
