#include<stdio.h>

int main(){
	int c, nl,blanks,tabs;

	nl = 0;
	blanks = 0;
	tabs = 0;

	while((c=getchar())!=EOF){
		if(c == '\n')
			++nl;
		else if(c== ' ')
			++blanks;
		else if(c== '\t' || c=='\v')
			++tabs;
	}
	printf("nl: %d\n",nl);
	printf("blanks: %d\n",blanks);
	printf("tabs: %d\n",tabs);
}
