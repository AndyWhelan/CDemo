//Program to copy input to output, 
//replacing each string of one or more blanks 
//by a single blank

//Uses a space count integer variable to check (sCount).

#include<stdio.h>

int main(){
	int c,sCount;
	sCount=0;
	while((c=getchar())!=EOF){
		if(c== ' '){
			if(sCount==0)
				putchar(c);
			++sCount;
		}
		else{
			sCount=0;
			putchar(c);
		}
	}
}
