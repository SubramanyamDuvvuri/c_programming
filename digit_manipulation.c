/*The code reveives a number, takes each of its digits, and finds its sum and average*/
//the code is  good example for array handling
// In this a number is given as input, first function converts the number to digits in revrse order
// then second function again  reverses the array to obtain original digits
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int* send(int,int*);
int* digit_rev(int*,int*);

int main()
{
	int number,count=1;
	int count2;
	
	int *d,*rev,i;					//array can also be represented as a pointer
	
	printf("\nEnter the number \n");
	scanf("%d",&number);


	d=send(number,&count);				//integer array can be received into a pointer

	count2=count;
//	printf("\ncount2--------->%d\n",count2);
	rev=digit_rev(d,&count);			//& is not required while sending an array pointer
							// address of count has been sent as the value has to be changed 
			
	for(i=0;i<count2;i++)
		printf ("in main%d  ",d[i]);
	return 0;
}

int* send(int number, int*count )
{
	int* r=(int*)malloc(MAX *sizeof(int)); 		//when a local array is initialised always use malloc, to dynamicallyy allocate memory
	int i=0;
	while (1)
	{
		if(number/10!=0)
		{
			r[i]=number%10;
			number=number/10;
			i++;
			*count=*count+1;		//incrament should be done like this , instead of *count++
			
		}

		else
		{
			r[i]=number;
			break;
		}
	}
	return r;
}
int* digit_rev(int* d,int* count)
{
	int i,j=0;
	int* digit=malloc(*count * sizeof(int));        //when a local array is initialised always use malloc, to dynamicallyy allocate memory

	*count=*count-1;
	while ( *count>=0)
	{
		digit[*count]=d[j];
		printf("\n%d---->%d    d[%d]---->%d\n",*count,digit[*count],j,d[j]);
		*count=*count-1;
		j=j+1;
	}
	
//	for(i=0;i<j;i++)
//		printf ("------------->>>>%d ",*(digit+i));
	
	return digit;	
	
}
	
