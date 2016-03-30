/* the code is the solution for problrm 1-6 of the book dinnise Ritche*/
/* Putting some other value in the printf statement instead of  EOF will give 0 as the output*/

#include<stdio.h>

int main ()
{
	int c;
	while ((c=getchar())!=EOF)
	{
		printf("%d",(c=getchar())!=EOF);
		putchar (c);
		printf("\n-------%d---------\n", EOF);	
	}
	return 0;
}





