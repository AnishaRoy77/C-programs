#include<stdio.h>
void reverse(int *arr, int n);
int main()
{
int arr[] = {1,2,3,4,5,6,7};
int i;

reverse(arr,7);
for( i=0;i<7;i++){
printf("The value of %d element is :%d",i,arr[i]);
}
return 0;
}
 void reverse(int *arr, int n)
 {
 	int temp, i;
 	for( i=0;i<(n/2);i++)
 	{
 		temp = arr[i];
		 arr[i] = arr[n-i-1];
		 arr[n-i-1] = temp;
		 	 }
 }
