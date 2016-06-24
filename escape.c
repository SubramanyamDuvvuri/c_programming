/*Exercise 3-2. Write a function escape (s, t) that converts characters like
newline and tab into visible escape sequences like \n and \ t as it copies the
string t to s. Use a switch. Write a function for the other direction as well,
converting escape sequences into the real characters.*/
#include<stdio.h>

#define MAX 1000

void escapeChar(char*,char*);


int main ()
{
	int c,i=0;
	char s[MAX];
	char t[MAX];
	while ((c=getchar())!=EOF)
	{
//		printf("-");
		s[i]=c;
		i++;
	}
	s[i]='\0';		

	
	escapeChar(s,t);
	printf("\n%s",t);

	return 0;
}

void escapeChar(char *s,char *t)
{
	printf ("%s",s);
	while(*s!='\0')
	{
		printf("*s-->%c \n",*s);
		
		printf("*t-->%c \n",*t);
		
		switch(*s)
		{
			case '\n': *t='\\';
				    t++;
				    *t='n';		
				   break;
			case '\t':  *t='\\';
				    t++;
				    *t='t';		
				   break;
	
			default : *t=*s;
		}
		s++;
		t++;		
	}

	*t='\0';	
	printf("\n%s",t);
}


