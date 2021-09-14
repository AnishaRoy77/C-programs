//write a program to print the value of a variable i using "pointer to pointer"type variable.

#include<stdio.h>
int main()
{
	int i = 570;
	int *ptr;
	int **ptr_ptr;
	
	ptr = &i;
	ptr_ptr = &ptr;
	
	
	printf("The value of i is %d\n",**ptr_ptr);
	
	
	 return 0;
}

