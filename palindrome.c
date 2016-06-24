/*Find if the number is palindrome or not*/

#include<stdio.h>
#define MAX 3
int main ()
{
	int a[3];
	int num,i=0,j=10;
	int length;
	printf("Enter the number\n");
	scanf("%d", &num);
	
	while(num>0)
	{
		
		{
	
			a[i]=num%10;
			num=num/10;
			i++;
		}
		
			
		
	}
	
	
//	printf("####");	
	for ( i=0;i<4;i++)
		printf("%d",a[i]);	




		
	return 0;
}
