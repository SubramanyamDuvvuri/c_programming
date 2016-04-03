/*Finding factorial of a number using reccursion*/
#include<stdio.h>


int fact(int);


int main()
{
	int number;
	int factorial;
	printf("\nEnter the number\n");
	scanf("%d",&number);
	factorial = fact(number);
	printf("\n%d\n",factorial);
}

int fact ( int number)
{
	int factorial=1;
	if (number ==0)
		return(1);
	else
		factorial = number*(number -1);
	return(factorial);
}


