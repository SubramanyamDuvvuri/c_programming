/*Function to concatinate two string*/

#include<stdio.h>
char* str_cat(char*p, char*q)
{
	while(*p!='\n')
		p++;
	while(*q!='\n')
	{
		*p=*q;
		 p++;
		 q++;
	}
	
}




