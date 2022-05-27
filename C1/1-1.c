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
	printf("hello, world\n");
}
