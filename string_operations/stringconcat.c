/*Exercise 5-3. Write a pointer version of the function strcat that we showed
in Chapter 2: strca t (s , t) copies the string t to the end of s. 0*/
/*String concatination using pointers*/
#include<stdio.h>

void strconcat(char* , char*);
#define MAX 100

int main ()
{
	char s[MAX]="Hello";
	char t[MAX]=",World!!!";

	strconcat(s,t);
	printf("%s\n",s);
	return 0;
}


void strconcat(char*s, char*t)
{
	while(*s++!='\0');
					
	while((*s++=*t++)!='\0');	
	
	
}


/*This moves the increment of sand t into the test part of the loop. The value of
*t++ is the character that t pointed to before t was incremented; the postfix
++ doesn't change t until after this character has been fetched. In the same
way, the character is stored into the old s position before s is incremented.*/
