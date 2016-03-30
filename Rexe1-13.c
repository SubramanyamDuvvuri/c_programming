/* Program to count the number of digits*/
//Page number 24,25 of Dennise Ritche
//exercise 1-13 also included
//Horizontal histogram has been made
#include<stdio.h>
#define MAX 10
int main()
{
	int c ;
	int ndigit[MAX];
	int i,j;
	for ( i=0; i <MAX;i++)
	{
		ndigit[i]=0;
	}
	
	while((c=getchar())!= EOF)
	{
		if(c >='0' ||c<='9')
			++ndigit[c-'0'];
		
	}
	
	for ( i=0; i <MAX;i++)
	{
		printf("%d-->%d",i,ndigit[i]);
		for(j=0;j<ndigit[i];j++)
		{
			printf("=");
		}
		printf("\n");
				
	}
	
	return 0;

}
