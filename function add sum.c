//create a sum()that accepts two integers and return the sum of two integers.
#include<stdio.h>
int sum(int i , int j);
int subtract(int i, int j);
int product(int i, int j);
int divisiov(int i, int j);
int check(int i);
int main()
{
	int a,b,c;
	printf("\n Enter two numbers:");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("\nsum=%d",c);
	c=subtract(a,b);
	printf("\nsubtract=%d",c);
	c=product(a,b);
	printf("\nproduct=%d",c);
	c=division(a,b);
	printf("division=%d\n",c);
	c=check(a);
		printf("check=%d",c);
	
		return 0;
}
int sum(int i, int j)
{
	return i+j;
}
int subtract(int i , int j)
{
	return i-j;

}
int product(int i , int j)
{
	return i*j;
}
int division(int i , int j)
{
	return i%j;
}
int check(int i)
{
	if(i%2==0)
	printf("\nEven\n");
	else
	printf( "odd\n");
	return i;
	

}
