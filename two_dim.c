#include<stdio.h>

void matrix_send(int (*q)[3]);
int main()
{
	int p[3][3];
	register int i,j;
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			*(*(p+i)+j)=i+j;
		}
	}
	matrix_send (p);
	printf("\n");
/*
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",*(*(p+i)+j));
		}
		printf("\n");
	}
*/
	return 0;
}
	
void matrix_send(int (*q)[3])
{
	register int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
			printf("%d ",(*q)[j]);
		}
		q++;
		printf("\n");
	}
}
