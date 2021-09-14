//write a program using a function to calculate sum and average of two numbers.Use pointer and print the values of sum and avg in main().

#include<stdio.h>
void sumAndavg(int a , int b, int *sum , float *avg);
int main(){
	int x,y,sum;
	float avg;
	x = 4;
	y = 5;
	sumAndavg(x,y , &sum,&avg);
	printf(" the value of sum is %d\n", sum);
	printf(" the value of avg is %f\n", avg);
	return 0;
}
void sumAndavg(int a, int b, int *sum , float *avg)
{
	*sum = a+b;
	*avg = (float) (*sum)/2;
}
