/*Program to add first 25 numbers using recursion*/


#include<stdio.h>

int add_rec(int);
int main ()
{
	int number,sum;
	printf("Enter the number\n");
	scanf("%d", &number);
	sum=add_rec(number);
	printf("\nsum of %d numbers is %d\n",number,sum);
	return 0;
}

int add_rec(int number)
{
	static int count=0;
	if (number ==1)
		return 1;
	else
		count=number +add_rec(number-1);
	return count;
}
