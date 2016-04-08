#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

int main ()
{
	//char *s=(char*)malloc(sizeof(char)*MAX);	//Always allocate hte memory using malloc for a local array to avoid segmentation falult
	char d[10];
	int q;
	fgets(d,MAX,stdin);
 	printf("%s",strchr(d,'\0'));	
	q=strlen(d);
	printf("%d ",q);	
	return 0;
}
