/* code to get many lines and print the longest line as output*/
/*Page 30 Dennise Ritche*/



#include<stdio.h>
#define MAX 300
int getline1 ( char[]);

void copy ( char[], char[]);

int main()
{	
	int len=0;
	int max=0;			//store the lenght of the longest line
	char s[MAX];
	char c[MAX];
	
	while ((len=getline1(s))>0)
	{
		if ( len >max)
		{

			//printf("\n%d",len);
			//printf("\n%d",max);
			max=len;
			copy(c, s);i
		}
	}
	printf ("\n\n%s\n",c);
	return 0;
	
}

int getline1 (char s[])
{
	int c,i=0; 
	while (MAX-1 && (c=getchar())!= EOF&& c!= '\n')
	{
		s[i++] =c;				// putting the charecters in an array to form a string
	}
		
		if (c=='\n')
			s[i++]=c;
	
	 return i;
}
	

void copy( char c[], char s[])

