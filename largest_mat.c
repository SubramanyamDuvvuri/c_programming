/*program tofind the largest element in a 5X5 matrix*/
//Do it through a functionand return the value

#include<stdio.h>
#define MAX 5
int largest(int (*p)[MAX]);

int main ()
{	
	int largest_number;
	register int i,j;
	int arr[MAX][MAX];
	printf("Enter elements of the array\n");
	for(i=0;i<MAX;i++)
	{
		for (j=0;j<MAX;j++)
			scanf("%d",&arr[i][j]);
	}
	largest_number=largest(arr); 
	printf("The largest element is %d\n",largest_number);
	return 0;
}

int largest ( int (*p)[MAX])		//Passing a two dimensional array
{
	int temp=0;
	register int i,j;
	for (i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
		{
			if(temp<(*p)[j])	//Checking if for the largest number
				temp=(*p)[j];
		}
		p++;
	}
	return temp;
}		

