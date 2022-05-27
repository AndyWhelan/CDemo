#include<stdio.h>

int main(){
	int c = getchar();
	int d = (c!=EOF);
	while(c!=EOF){
		putchar(c);
		c=getchar();
		d=(c!=EOF);
		printf("\ngetchar()!=EOF = %d\n",d);
		printf("\n\nEOF = %d\n\n",EOF);
	}
}
