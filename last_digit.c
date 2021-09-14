// c rogram to find the last digit of a number

#include<stdio.h>

int main()
{
    int num , lastdigit ;
    printf("Enter any number : \n");
    scanf("%d",&num);
    lastdigit = num % 10;
    printf("The last digit of the number is : %d" , lastdigit);

    return 0;
        
}
