/* Program to count the number of digits*/
//Page number 24,25 of Dennise Ritche
//exercise 1-13 also included
//Horizontal histogram has been made
//histogram of characters
#include<stdio.h>
#define MAX 127
int main()
{
	int c ;
	int nchar[MAX];
	
	int i,j;
	for ( i=0; i <MAX;i++)
	{
		nchar[i]=0;
	}
	
	
	while((c=getchar())!= EOF)
	{
		if(c >='0' ||c<='~')
			++nchar[c-'0'];
		putchar (c);
	}

	for ( i=0; i <MAX;i++)
	{
		//if (i>=0 || i<= 9)
		//	printf("%d-->%d",i,nchar[i]);
		//else if (i>=10 || i<= 127)
			printf("%c-->%d",i,nchar[i]);
		
		for(j=0;j<nchar[i];j++)
		{
			printf("=");
		}
		printf("\n");
				
	}
	
	return 0;

}
