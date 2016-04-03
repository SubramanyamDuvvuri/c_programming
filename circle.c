/*program to find area and perimeter of a circle using functions and poiners*/

#include<stdio.h>


void areaperi ( float , float*,float*);

int main ()
{
	float radius;
	float perimeter,area;
	
	printf("enter the radius\n");
	scanf("%f",&radius);
	
	areaperi(radius,&perimeter,&area);
	printf ("\narea=%f\nperimeter=%f\n",area,perimeter);
	
	return 0;
}

void areaperi ( float radius,float *perimeter , float *area)
{
	*area=3.14*radius*radius;
	*perimeter =2*3.14*radius;
}

