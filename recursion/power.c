/*Prorrame to find the power of a number using recursion*/
#include<stdio.h>
int pow(int,int);
int main ()
{
	int number;
	int power;
	int answer;
	printf("Enter the number\n");
	scanf("%d", &number);
	printf("Enter the power");
	scanf("%d", &power);
	answer=pow(number,power);
	printf("The answer is %d\n",answer);
	return 0;
}
int pow ( int number , int power)
{
	static int solution;
	if (power == 0)
		return 1;
	else

		solution = number * pow(number,power-1);
	return solution;
}



