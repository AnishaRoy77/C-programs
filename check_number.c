//Program to check positive, negative or zero using simple if
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any Number\n");
    scanf("%d", &num);

    if(num>0)
    {
        printf("Positive Number");
    }
    if(num<0)
    {
        printf("Negative Number");
    }
    if(num==0)
    {
        printf("The number is Zero");
    }
    return 0;
}

    