
//programe to find the size of a data type//

#include<stdio.h>
int main () 
{ 
	int c;
	c = sizeof(c);
	printf("%d\n",c);
	printf("%zu\n", sizeof(c));
	return 0;
}


/*   %zu prints as unsigned decimal
     %zx prints as hex
     %zd prints as signed decimal
*/
