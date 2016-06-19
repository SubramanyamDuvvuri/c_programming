#include<stdio.h>
#include<string.h>
#define MAXCHAR 100



typedef struct library
{
	char bookTitle[MAXCHAR];
	char authorName[MAXCHAR];
	float price;
	bool availability;
}library;


void addBookInfo();
void displayBookInfo();
void authorName();
void displayTitle();
void numberOfBooks();



int main()
{	
	int num,i;
	int select;
	printf("Select an option\n");
	scanf("%d",&select);
/*	printf("Enter the number of books");
	scanf("%d",&num);	
	library *lib[num];			//10 books//Array of 10 structure pointers
	
	for(i=0;i<num;i++)
	{
		lib[i]=(library*)malloc(sizeof(library));
	}	
	
*/
	while(1)
	{
		printf ("\n1. Add book info.\n 2.Display Book Info\n 3.List all the books of a given author \n 4.List the title of the given book\n"); 
		printf("\n5. List the count of the books in the library \ņ 7. Exit");
		switch (select)
		{
			case 1 : 
					
				 
			case 2 :
		
			case 3 :
			
			case 4 :
			
			case 5 :

			case 6 :
			
			case default : printf(" invalid number \n ");
