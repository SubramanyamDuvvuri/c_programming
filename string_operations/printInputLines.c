/*Exercise 1-17. Write a program to print all input lines that are longer than 80
characters.*/
#include<stdio.h>
#define MAX 1000


int main()
{
	int c,i=0;
	char*d;
	char s[MAX];
	d=s;
	
	while((c = getchar())!=EOF)
	{
		 
		 *d=c;
		 d++;
		 i++;	
		if(c=='\n')
		{	
			if (i>10)
		 
				printf ("%s",s);
			else
			{
				d=s;	
				i=0;
			}
		}
	


	 }
	
//		printf("%s",s);	
	return 0;
}
