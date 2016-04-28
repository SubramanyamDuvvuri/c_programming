/*Converting the inteer to a digit in reverserse order*/
#include<stdio.h>
#define MAX 100
int main ()
{
	int number,x,y;
	int digit[MAX];
	int i=0;
	int count=1;
	scanf("%d",&number);
	while (1)
	{
		if( number/10 !=0)
		{		
			digit[i]=number%10;
			number=number/10;
			//printf("\n%d\n",digit[i]);
			i++;
			count++;
		}
		else
		{
			digit[i]=number;
			break;
		}
	}
//	printf("\n%d\n",count);	
	for (i=0;i<count;i++)
		printf("%d\n",digit[i]);
	
	return 0;
}
