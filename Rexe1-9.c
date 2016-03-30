/*the code copies the input to its output replacing multiple blanks and new lines to single blank and newline respectively*/
#include<stdio.h>
#define MAX 100

int main ()
{	
	int c;
	int nw=0;
		
	while ((c=getchar())!=EOF)
	{
		if (c == ' ')
		{
			
				c='\b';
			
			
		}
		putchar (c);
	}
	return 0;
					
}

