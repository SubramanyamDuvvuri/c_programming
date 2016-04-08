#include<stdio.h>

int str_len( char *q )
{
	int length =0;
	while (*q!='\n')
	{
		length++;
		q++;
	}
	return length;
}
