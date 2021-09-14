#include<stdio.h>
int main ()
{
    int num1 , num2;
    int sum , sub , mult , mod;
    float div;
    
     printf("Enter any two numbers\n");
     scanf("%d%d",&num1 , &num2);

     sum = num1 + num2;
     sub = num1 - num2;
     mult = num1 * num2;
     mod = num1 % num2;

     div = (float) (num1) / num2;

     printf("sum = %d\n", sum);
     printf("sub = %d\n",sub);
     printf("mult = %d\n",mult);
     printf("mod= %d\n",mod) ;
     printf("div = %f\n",div);

     return 0;     
     
}