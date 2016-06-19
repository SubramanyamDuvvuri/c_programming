#include<stdio.h>


int main( int argc, char*argv[])
{

	printf("%d",argc);
	printf("\n%s",argv[argc-1]);
	printf("\n%s",argv[argc -2]);
	
	return 0;
}
