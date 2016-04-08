/* Program to print multiplication table of the entered number*/
#include<stdio.h>
int main ()
{
	int number;
	register int i;
	printf("Enter the number \n");
	scanf("%d",&number);
	
	for(i=1;i<80;i++)
	{
		printf("%d X %d = %d\n",number,i,number*i);
	}
	return 0;
}
	



