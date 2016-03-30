/* Program to count the number of digits*/
//Page number 24,25 of Dennise Ritche
//exercise 1-13 also included
//Horizontal histogram has been made
//Vertical histogram implemented
#include<stdio.h>
#define MAX 10
int main()
{
	int c ;
	int ndigit[MAX];
	int ncheck[MAX];
	int i,j,temp=0;
	for ( i=0; i <MAX;i++)
	{
		ndigit[i]=0;
		ncheck[i]=0;
	}
	
	while((c=getchar())!= EOF)
	{
		if(c >='0' ||c<='9')
			++ndigit[c-'0'];
		
	}
	
	for ( i=0; i <MAX;i++)				//Horizontal histogram
	{
		printf("%d-->%d",i,ndigit[i]);
		for(j=0;j<ndigit[i];j++)
		{
			printf("=");
		}
		printf("\n");
				
	}

	printf("\n------------------\n");
	//Algorithm to find the maximumnumber in an array
	for(i=0;i<MAX;i++)
	{
		if (temp<ndigit[i])
		{
			temp=ndigit[i];
		}
	}		
	printf("Maximum number, i.e. maximum occurce of a number%d",temp); // will be used to set the vertical for loop in vertical historgam

	printf("\n------------------\n");
	

	
	for ( i=0; i<MAX ; i++)
		printf("%d\t",i);

	printf ("\n");
	
	for ( i=0; i<MAX ; i++)
		printf("|\t");

	
	printf("\n");	
	
	for (i=0; i<MAX ; i++)
		printf ("%d\t",ndigit[i]);
	
	printf("\n");

	
	
	//Algorithm for vertical histogram 
	for(j=0;j<temp;j++)
	{

		for ( i=0;i<MAX;i++)
		{
			if (ncheck[i]!=ndigit[i])
			{
				printf("||\t");
				++ncheck[i];
			}
			else 
			{
				printf("\t");
			}
		
			
			
		}
			printf("\n");


	}	
	return 0;
}
