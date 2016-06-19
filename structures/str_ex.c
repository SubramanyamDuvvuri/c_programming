/*Examples of structures*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
//Declaring a structure


struct book 
{
	char name[MAX];
	float price;
	int pages;
};
struct book b1;

int main ()
{
	fgets(b1.name,MAX,stdin);
	printf("%s", b1.name);
	return 0;
}
