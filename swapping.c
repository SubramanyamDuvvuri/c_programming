#include<stdio.h>


void swap ( int*, int*);

int main ()
{
	int i,num1,num2;
	printf(" enter the two numbes\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	printf("The two numbers are\nnum1=%d\nnum2=%d",num1,num2);
	swap (&num1,&num2);
	printf("\nAfter swapping\n");
	printf("\nnum1=%d\nnum2=%d",num1,num2);
	printf("-------\n%d\n------",&num1);
	return 0;

}

void swap( int* num1, int *num2)
{
	int temp;
	printf("---\n%d\n---",num1);
	temp = *num1;
	*num1 =*num2;
	*num2 = temp;
}

