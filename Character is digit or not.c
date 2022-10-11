#include<stdio.h>
#include<stdlib.h>

int main()
{
	 char ch;

	 printf("Enter a character: ");
	 scanf("%c", &ch);

	 if(ch>='0' && ch<='9')
	 {
	  	printf("%c is DIGIT.", ch);
	 }
	 else
	 {
	  	printf("%c is NOT DIGIT.", ch);
	 }

	 return(0);
}
