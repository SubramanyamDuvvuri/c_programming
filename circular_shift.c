//programme to circularly shift  3 integrs


#include<stdio.h>
void shift(int*,int*,int*);


int main ()
{
	int x,y,z;
	printf("Ther the three numbers\n");
	scanf("%d%d%d",&x,&y,&z);
	printf("The numbers are \n");
	printf("x=%d\ny=%d\nz=%d",x,y,z);
	
	shift(&x,&y,&z);
	printf("---");
	printf("\nx=%d\ny=%d\nz=%d",x,y,z);

	return 0;
}
	
void shift ( int*a,int*b,int*c)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=*c;
	*c=temp;
}	
