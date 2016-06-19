#include<stdio.h>

int main ()
{
	int i,temp,j;
	int array[]={2,33,54,1,55,33,76,55,21,56};
	for ( i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if (array[j]>array[i])
			{
				temp=array[j];
				array[j]=array[i];

				array[i]=temp;
			}

				
		}
	}
	for ( i=0;i<10;i++)
	{
		printf("\n%d", array[i]);
	}
	
	return 0;
}
