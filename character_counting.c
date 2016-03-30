/* The code is the character counting code from dennise ritche*/
// the code cunts the number of characters lines and words
// the code is the modified varsion of the code in the book in the page 19
#include<stdio.h>

int main ()
{
	int c,nc=0,nl=0,nw=0;
	while((c = getchar())!= EOF)
	{
		if(c== '\n')
			nl=++nl;
		if(c==' '||c=='\n')
			nw=++nw;
		nc=++nc;
	}
	printf("number of characters =%d,\nNumber of words = %d,\nNumber of new lines = %d\n" , nc,nw,nl);
	return 0;
}

