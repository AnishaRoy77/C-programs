// finding largest and smallest among three numbers 
#include<stdio.h>
 int main()
{
	int a=stdio10,b=20,c=30;
    if(a>b && a>c)
	printf("\n %d is largest",a);
	else if(b>c && b>a)
	printf("\n %d is largest",b);
	else
	printf(" \n %d is largest",c);
	if(a<b && a<c)
	printf("\n %d is smallest",a);
	else if(b<c && b<a)
	printf(" \n %d is smallest",b);
	else
	printf(" \n %d is smallest",c);
	return 0;
}
