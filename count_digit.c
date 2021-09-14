
//  C program to count number of digits in an integer

#include<stdio.h>
int main()
{
    int count = 0;
    long long num;
    printf("Enter any number : \n");
    scanf("%lld", &num);

    do
    {
        count++;
        num = num / 10;
 }

  while(num != 0 );
 printf("Total digits : %d", count);
 return 0;
}
 