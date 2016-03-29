//programme to find convert farhenheit to celcius
//printing a table of conversions 
#include<stdio.h>

int main ()
{
	int fahr,cel,i;


	for(i=0; i<10;i++)
	{
		cel=(5/9)*(i-32);
		printf("%d\t%d\n", i,cel);
	}
		
	return 0;
}
		
