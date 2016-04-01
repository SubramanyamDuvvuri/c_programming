/* Program to find */
//factorial
//even or add
//prime or not 

#include<stdio.h>

int factorial (int);
int evenodd (int);
int prime (int);

int main ()
{
	int number,flag,answer;
	printf ("\n enter the number");
	scanf	("%d",&number);
	
	printf ("\n1.Factorial\n2.Even or odd\nPrime or not\n");
	scanf("%d",&flag);

	switch(flag)
	{
		case 1 :	answer=factorial(number);
				printf("The factorial is %d", answer);
				break;
		case 2:  	answer = evenodd(number);
				if (answer)
					printf(" the number is even");
				else
					printf(" the number is odd");
				break;
		case 3:     	answer =prime(number);
				if (answer)
					printf(" the number is prime");
				else
					printf(" the number is not a prime");
				break;
		default:
				printf("Exiting\n");
				exit(0);
	}
	return 0;
}

int  factorial ( int number)
{
	int i,f=1;
	for ( i=number ;i>= 1; i--)
		f=f*i;
	return f;
}


int evenodd (int number )
{
	if ( number%2==0)
		return 1;
	else 
		return 0;
}

	 
int prime ( int number )

{
	return 0;
}



