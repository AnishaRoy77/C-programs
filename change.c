//write a program to change the value of a variable to ten times of its current value . write a function and pass the value by call by reference.
#include<stdio.h>
#include<math.h>
int changeValue(int *a);
int main()
{
	int i = 2;
	int *a;
	a =&i;
	

	printf("The value of  variable i before changing is %d\n",i);
	 
	 *a = pow(2,10);
	
	changeValue(&i);
	
	printf("The value of variable i after changing is %d\n",i );

	return 0;
}
 int changeValue(int *a)
 {
	printf("The address  of variable i is %u\n",a);
 
 }

