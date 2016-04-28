/*Examples of structures*/
#include<stdio.h>
#include<stdlib.h>

//Declaring a structure


struct book 
{
	char *name;
	float price;
	int pages;
};
struct book b1;

int main ()
{
	fgets(b1.name,20,stdin);
	printf("\n%s", b1.name);
	return 0;
}
