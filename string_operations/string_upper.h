/*function to convert a string from lower to upper string*/

#include<stdio.h>

int str_upr (char*q,int length)
{
	int count=0;
	while(count!=length)
	{
		if(*q>='a'&&*q<='z')
		{	
			*q=*q-32;
			q++;
			count++;
		}
		else
		{
			q++;
			count++;
		}
		
	}
	printf("%s",q);
}
