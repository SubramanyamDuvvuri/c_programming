/*Program to find the simple interest and compound interest*/


#include<stdio.h>


int simple_interest ( int ,int ,int );

int  main ()
{
	int SI,P,R,T;
	
	printf(" Enter principle rate and period \n");
	scanf("%d%d%d",&P,&R,&T);
	
	SI=simple_interest(P,R,T);
	printf ( "\nThe simple interest is  %d",SI);
	return 0;
}



int simple_interest( int P,int R,int T)
{
	int SI=0;
	SI=(P*R*T)/100;
	return SI;
}	
