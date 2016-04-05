#include<stdio.h>
#include<stdlib.h>

int* rev(int*,int);

int main()
{
	int n;
	int* arr;
	int* rev_arr;
	register int i;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("Enter the elements\n");
	for ( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//Reversing the string
	
	rev_arr=rev(arr,n);
	for ( i=0;i<n;i++)
	{
		printf("%d--->%d\n",i,rev_arr[i]);
	}
	return 0;
}

int* rev (int *arr,int n)
{
	int *array=(int*)malloc(n*sizeof(int));
	register int i=n-1,j=0;
	while (j<n)	
	{
		*(array+i)=*(arr+j);
		i--;
		j++;
	}
	return  array;
}
