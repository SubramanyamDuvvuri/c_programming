/*
Write a menu driven program that depicts the working of a
library. The menu options should be:
Add book information
Display book information
List all books of given author
List the title of specified book
List the count of books in the library
List the books in the order of accession number
Exit
Create a structure called library to hold accession number,
title of the book, author name, price of the book, and flag
indicating whether book is issued or not.
*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAXCHAR 100
#define MAXBOOKS 100



typedef struct library
{
	char bookTitle[MAXCHAR];
	char authorName[MAXCHAR];
	float price;
	bool availability;
	int sessionNumber;
}library;


void addBookInfo(library**book);
void displayBookInfo(library**);
void authorName();
void deleteBook(library**);
void numberOfBooks();	
//void displayTitle();
//void numberOfBooks();
int count=0;


int main()
{	
	int num,i;
	int select;
	int tempSessionNumber;
	library **book=(library**)malloc(sizeof(library)*MAXBOOKS);
	//library **book= malloc(sizeof(library*)*MAXBOOKS);
	library** temp;
//	library *Head=(library*)malloc(sizeof(library));
//	*book = Head;
	
	while(1)
	
	{
		
		printf ("\n1. Add book info.\n 2.Display Book Info\n 3.List all the books of a given author \n 4.List the title of the given book\n");
 
//////////////		printf("5. List the count of the books in the library \ņ 7. Exit\n");
		printf("Select an option\n");
		scanf("%d",&select);
				
		switch (select)
		{
			case 1 :addBookInfo(book);
		//		printf("%f...",book[0]->price);
				break;
				 
			case 2 :
//				Head=*book;
		//		printf("++++%f++++",book[0]->price);
				displayBookInfo(book);
		//		printf("++++%f++++",book[0]->price);
				break;
		
			case 3 :
				deleteBook(book);
				break;
			
			case 4 :
				numberOfBooks();
				break;
			
	/*		case 5 :
				break;

			case 6 :
				break;
		*/	
			case 7 :printf(" EXITING...");
				for(i=0;i< count;i++) 
					free(book[i]);
				free(book);
				exit(0);
				break;	
			
			 default : printf(" invalid number \n ");
		}

	}
	return 0;



}


void addBookInfo(library **book	)
{
	
	library *books=(library*)malloc(sizeof(library));
	//library **book=(library**)malloc(sizeof(library)); 
	printf("Enter Book details...\n");

	/*printf("Enter Book name \n");
	scanf("%s",books->bookTitle);
	printf("Enter author name\n");
	scanf("%s",books->authorName);
	printf("Enter the price \n");
	scanf("%f",&books->price);
	books->availability=true;
*/	printf("Enter session number\n");
	scanf("%d",&books->sessionNumber);

	book[ count]=books;
	count++;			
	
	
//	printf("%f",book[0]->price);
//	return book;
}

void displayBookInfo(library**book)
{
	int i;	
	printf("Display info of all the books\n");
	for(i=0;i<count;i++)		
	{
		printf("%d\n",book[i]->sessionNumber);
		//printf("%f\n,",book[i]->price);
		

	}
}


void deleteBook(library**book)
{
	int i;
	int temp=0;
	int tempSessionNumber;				
	if(count == 0)
	{
		printf("xxxxxxxxxxxxxThe library is empty add some booksxxxxxxxxxxxxx\n");
		return;
	}
	printf ( "Enter the session number of the book to be deleted \n ");
	scanf("%d",&tempSessionNumber);
	
	for(i=0;i< count;i++)
	{
		//printf("%d\n",book[i]->sessionNumber);
		//printf("%d\n",count);

		if(book[i]->sessionNumber==tempSessionNumber)
		{
				
			memmove(&book[i], &book[i+1], (count-i-1) * sizeof(book[i]));
			//free(book[i]);
			temp=0;
			break;		
			
		}
		else
		{
			temp=1;
		}
	}

	if(temp==0)
	{	
		printf("*****DELETED....****\n");
		count--;
	//	printf("%d",*count);
	}
	else
		printf("******Invalid session number********\n");
	

}

void numberOfBooks()
{
	printf("Number of Books---> %d\n",count);

}




