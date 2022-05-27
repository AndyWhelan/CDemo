#include<stdio.h>

					/*	Excluding the precompiler directive error:

						 	1-1.c:11:2: error: implicitly declaring library function 'printf' with type 'int (const char *, ...)' [-Werror,-Wimplicit-function-declaration]
		        				printf("hello, world\n");
		        				^
							1-1.c:11:2: note: include the header <stdio.h> or explicitly provide a declaration for 'printf'
							1 error generated.
					*/

int main(){				/*	Excluding "int" compiler warning:

							1-1.c:3:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
							main(){
							^
							1 warning generated.

					*/
	char c[15]="hello, world";
	char esc[11] = {'\a','\b','\f','\n','\r','\t','\v','\\','\'','\"','\0'};
	char escChar[11][10] = {"\\a","\\b","\\f","\\n","\\r","\\t","\\v","DBS","BSP","BSDP"};
	char escCharDesc[11][30] = {"Alert (Beep)","Backspace","Formfeed Page Break", "Newline","Carriage return","Horizontal Tab","Vertical Tab","Backslash","Apostrophe","Double Quotation"};
	for(int i = 0; i<10;i++){
		c[12]=esc[i];
		printf("%s: %s \n",escChar[i],c);
	}

	for(int i = 0; i <10;i++){
		printf("%s: %s \n", escChar[i], escCharDesc[i]);
	}

	for(int i = 0; i<100;i++){
		printf("\a");
	}

	printf("This is a new line. \n Second Line  \r Third line, testing the carriage return");


	printf("\nHorizontal Tab test \t New Text \n");
	printf("\nVertical Tab test \v New Text \n");
}
