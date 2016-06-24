/*program to count the number of occurrences of each digit, of
white space characters (blank, tab, newline)*/

#include<stdio.h>
#define MAX 100
int main ()
{
	int nDigit[10];
	int nSpace=0;
	int nLine=0;
	int nTab=0;
	int c,i;
	for (i = 0;i<10;i++)
	{
		nDigit[i]=0;
	}
	while((c=getchar())!=EOF)
	{
		if (c>='0'&&c<='9')
			++nDigit[c-'0'];
		else if(c=='\n')
			++nLine;
		else if(c=='\t')
			++nTab;
		else if(c==' ')	
			++nSpace;
	}

	printf ("Digits are --> ");
	for(i=0;i<10;i++)
	{
		printf("%d ", nDigit[i]);
	}

	printf( "\nSpaces --> %d\n", nSpace);
	printf("\nLines --> %d\nTabs-->%d\n",nLine,nTab); 
	return 0;
}
