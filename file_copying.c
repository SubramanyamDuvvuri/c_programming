/* Programme for file copying*/
/* The exmple of Dinnise ritche Page 16*/
//getchar() takes the input from  the keyboard
//putchar prints the character on the keyboard
//try putting '0' instead of EOF or other vlaues to understand the behaviour

#include<stdio.h>

int main ()
{
	int c; 			//it is usd as the EOF is an integer
	
 	while((c=getchar())!='EOF')	//c = getchar can be direcly put into while loop to 
					//decrease the size of the code and makes the code unbreakable

	{
		putchar(c);
	}
	return 0;
}
