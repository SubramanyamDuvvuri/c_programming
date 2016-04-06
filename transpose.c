/*Code to find the transpose of a matrix*/
//Using a transpose function
//Copy the transpose data to another 2D array
#include<stdio.h>
#define MAX 3
void transpose(int (*p)[MAX]);

int main ()
{	
	int arr[MAX][MAX];
	register int i,j;
	printf("Enter the elements of a 5x5 matrix\n");
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
			scanf("%d",&arr[i][j]);
		
	}
	transpose(arr);
	return 0;

}



void transpose(int (*p)[MAX])
{
	register int i,j;
	int q[MAX][MAX];
	for(i=0;i<MAX;i++)					
	{
		for(j=0;j<MAX;j++)
			printf("%d ",(*p)[j]);		//Displying the elements of the 2D array,
		p++;					//The pointr starts pointing to the end
		printf("\n");
		
	}
	p=p-MAX;					//Pointer brought back to the initial position to use it again
	printf("---------\n-------\n");

	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
		{
			q[j][i]=(*p)[j];
			printf("%d ",(*p)[j]);			
		}
		p++;
		printf("\n");
		
	}
	printf("\n");
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
			printf("%d ",q[i][j]);
		
		printf("\n");
	}
}

