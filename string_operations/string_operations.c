/*The function contains code for different string operations*/
//strlen--> finds the length of the string
//strlwr--> Converts the string to lower case
//strupr-->Converts the string to upper case

#include<stdio.h>
#include<stdlib.h>
#include"input.h"
#include"string_length.h"
#include"string_upper.h"
#include"string_lower.h"
#include"string_concat.h"
#define MAX 100
int main ()
{
	int number;
 	char *p;
	char *q;
	char *result;
	printf("1-Find the length of the string\n2.Convert the string to lower case\n3.Convert he string to upper case\n4.String Concatication\n5.Exit");
			
		printf("\nEnter the operation to be performed\n");
		scanf("%d",&number);
		switch(number)
		{
			case 1: p=input_string();
			   	printf("The length of the stringis%d\n",str_len(p));
				break;
			case 2:p=input_string();
			 	str_lwr(p,str_len(p)-1);
				break;
			case 3: p=input_string();
				str_upr(p,str_len(p)-1);
				break;

			case 4:printf("Enter two strings\n");
				p=input_string();
				q=input_string();
				printf("%s",q);
				result=str_cat(p,q);
				printf("The concatinated string is %s",p);
				break; 		
							
			case 5: exit;	
		}
	
//		printf("%s ",p);
}



