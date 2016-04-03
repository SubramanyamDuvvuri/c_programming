/*Fibonacci sequence*/

#include<stdio.h>
int main ()
{
	int f1=0,f2=1,f;
	int number,i;
	printf("Enter the range of the sequence\n");
	scanf("%d",&number);
	printf("\nThe fibonacci sequence is \n");
	for(i=0;i<=number;i++)
	{
				
			f=f1+f2;
			f1=f2;
			f2=f;
		printf("%d  ",f);
	}	
	printf("\n");
	return 0;
}
	


