//Program to copy input to output,
//replacing 	each tab by \t,
//		each backspace by \b
//		each backslash by \\
//making tabs and backspaces visible in an unambiguous way.

//	NOTE FOR MACS: NeedTerminal>Preferences>Advanced, check the box that enables delete to send Control-H.

#include<stdio.h>

int main(){
	int c;
	while((c=getchar())!=EOF){
		if(c== '\t'){
			putchar('\\');
			putchar('t');
		}
		else if(c==8){
			putchar('\\');
			putchar('b');
		}
		else if (c=='\\'){
			putchar('\\');
			putchar('\\');
		}
		else
			putchar(c);

	}
}
