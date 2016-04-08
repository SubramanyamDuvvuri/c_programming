/*function to convert a string from upper to lower string*/

#include<stdio.h>

int str_lwr (char * q,int length)
{
	int count=0;	
	while(count!=length)
	{
		if(*q>='A'&&*q<='z')
		{
			*q=*q+32;
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
