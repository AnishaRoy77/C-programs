#include <stdio.h>
void swap( int *a , int *b);
int main()
{
int a = 3 ; int b = 4; 
printf("The value of a & b before swapping is %d and %d \n",a , b);
swap(&a,&b);
printf("The value of a & b after swapping is %d and %d\n",a , b);

return 0;


}
void swap(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
	
}
