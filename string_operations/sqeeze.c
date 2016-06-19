/*Exercise 2-4. Write an alternate version of squeeze (s 1,s2) that deletes
each character in s 1 that matches any character in the string s2i*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int main ()
{
	char s[100];
	char d[100];
	char temp[100];
	char m;
	int stringOneLength,stringTwoLength ;
	int i=0,j=0,k=0;;
	printf( "Enter the s1 and s2i\n");
 	fgets(s,MAX,stdin);
	fgets(d,MAX,stdin);
	m='d';
	printf("\nMatching characters in s2 will be deleted from s1\n");

	for (j=0;d[j]!='\0';j++)
	{
		k=0;
		for ( i=0; s[i]!='\0';i++)
		{
			if ( s[i]!=d[j])
			{
				s[k++]=s[i];
				
			}
		}
		
	}
	s[k]='\0';
	printf("\n%s\n",s);			
	


	return 0;
	
}
	
		
