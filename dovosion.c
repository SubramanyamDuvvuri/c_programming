/*division without using divide operator*/
#include<stdio.h>
int main()
{
	int number=20;
	int div=5;
	int count1=0;
	int count =0;
	while(1)
	{
		if((number-div)>div)
		{
			number=number-div;
			count1++;	
			printf("--3");	
		}
		else if(number==0)
		{
			printf("--2");
			break;
		}
		else
		{
			printf("--1");
			number=number*100;
			printf("%d",number);	
			if((number-div)>number)
			{
				number=number-div;
				count++;	
			
			}	
			
		}
	}
	printf("%d.%d",count1,count);
	return 0;
}	
