/*Fibonacci series using Reccursion*/

#include<stdio.h>

int fib(int);

int main ()
{
	int number,fibonacci;
	printf ("Enter the number \n");
	scanf("%d",&number);
	fibonacci=fib(number);
	printf ("%d",fibonacci);
	return 0;
}

int fib ( int n)

{
	int temp;
	if (n==0)
		return 0;
	else if(n==1)
		return 1;
	else
	{
		temp=(fib(n)+fib(n-1));
		printf( "%d\n",temp);
		return (temp);
	}
}
	


