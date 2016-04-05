/*Prograamme to add 25 numbers through reccursion*/


#include<stdio.h>


int add_recc(int*);

int main ()
{
	
	int i ,add=0,sum=0;
	int count=0;
	printf("%d\n",add_recc(&count));;
	return 0;
}
		

int add_recc(int* count)
{
	static int addition=0;
	if (*count==3)
		addition = 3;
	
	addition= addition+ add_recc(*count+1);

	return addition;
}
