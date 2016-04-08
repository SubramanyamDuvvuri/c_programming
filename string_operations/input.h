/*Code to input the string*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

 char* input_string()
{
	char*s;
//	free (s);
	 s=(char*) malloc (sizeof(char)*MAX);
	printf("Enter the string\n");
	getchar();
	fgets(s,MAX,stdin);
	return s;

}
