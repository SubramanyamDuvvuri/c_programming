#include<stdio.h>
#define MAX 100
void revString( char[]);


int main ()
{
	char stringSource []="Subramanyam";
	char stringDes[MAX];
	int i,count=0;


	stringSource[0]=84;
	//printf("\n\n%s\n\n",);	

	printf("Entered string is %s\n",stringSource);
	printf("Reversed string is\n" );
	
	while (stringSource[count]!='\0')
	{	
		*(stringSource+count); 
		count++;

	}
	for ( i=0;i<=count;i++)
	{
		*(stringDes+i)==*(stringSource-i);
	}
	printf("%s",stringDes);
	return 0;
}
	
