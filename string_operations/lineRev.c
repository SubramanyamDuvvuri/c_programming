/*Exercise 1-19. Write a function reverse (s) that reverses the character
string s. Use it to write a program that reverses its input a line at a time. 0
*/

#include<stdio.h>
#define MAX 100
int main ()
{
	int c,i=0,j=0;
	char s[MAX];
	char *d;
	d=s;			//d is pointing to s[0];	
	
	while((c=getchar())!=EOF)
	{
		*d=c;
		 d++;
		 i++;

		if(c=='\n'&&i!=1)
		{
			printf("---->%d\n",i);
					
			d=s;			//d is pointing to s[0];
			
			printf("\n%s",s);
 			i=i-2;	
				
			//for (j=0;i>=0;i--,j++)
			while(i>=0&&j<i)
			{
				c=s[i];
				s[i]=s[j];
				s[j]=c;
				i--;
				j++;
					
			}
			printf("%s",s);
			i=0;
			j=0;


		}
//		i=(i==1)?0:i;
		
	}
		
//	printf("----------------");

	
	return 0;
}
	



