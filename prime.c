/*Program to find if the entered number is prime or not */
#include<stdio.h>
int main()
{
	int number,p,count=0;
	register int i,j;
//	printf("Enter the number\n");
//	scanf("%d",&number);
 	for (j=1 ; j<=100;j++)
	{		
		for ( i=1;i<=j/2;i++)
		{
			if(j%i==0)
				count++;

		}
	
		if(count<=2)
		{
			printf ("%d ",j);
		}
		count=0;
		//else
		//	printf("the number is  prime\n");
	}
	printf("\n");
	return 0;	
}	
	

