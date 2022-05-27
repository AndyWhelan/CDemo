//Program outputs the ascii value you input when prompted
#include<stdio.h>

int main(){
	int c;
	printf("Enter character: ");
	c=getchar();
	printf("\n%c ASCII value: %d\n",c,c);

/*	while((c=getchar())!=EOF){
		printf("\n%c ASCII value: %d\n",c,c);
		printf("Enter character: ");
	}*/
}
