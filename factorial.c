/*Factorial of a number*/
#include<stdio.h>

int fact ( int )


int main ()
{
	int number,i,f=1;
	printf("Enter the number whose factorial has to be found\n");
	scanf ("%d", &number);
	for(i=number; i>=1;i--)
	{
			f=f*i;
			printf("%d",f);
	}
	printf("Factorial of %d is %d\n", number, f);
	return 0;
}





