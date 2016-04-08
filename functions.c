/*Example of Dennise ritche*/
//Page number 26
//power of a number

#include<stdio.h>

int power ( int, int);						//Function Defination

int main ()
{
	int number, pow,answer;
	printf("Enter the number whose power has to be found\n");
	scanf("%d", &number);					//taking input
	printf("Ener the power\n");
	scanf("%d",&pow);
	answer=power(number,pow);				//function calling
	printf("%d power of %d =%d ",number,pow,answer);
	return 0;
}

int power ( int number, int pow )// both paramters are integers with integer return
{
	int i ;
	int temp=1;
	for ( i = 0 ; i<pow;i++)
	{
		temp =temp*number;
	}
	if ( power ==0)
		temp =1;        //return 1 if the power is 0		
	return temp;
	printf("------------");
}

 
	
	




