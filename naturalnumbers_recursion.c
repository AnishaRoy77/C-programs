//c program to print all natural numbers from 1 to n using recursion

#include<stdio.h>
void printNaturalnumbers(int lowerlimit , int upperlimit);


int main()
{
    int lowerlimit , upperlimit;
    printf("Enter Lower Limit  : \n");
    scanf("%d", &lowerlimit);
    printf("Enter Upper Limit  : \n");
    scanf("%d", &upperlimit);
    printf("All Natural Numbers From   %d   to   %d   are :\n " , lowerlimit , upperlimit);
    printNaturalnumbers(lowerlimit , upperlimit);

    return 0;
    }

    /**
 * Recursively prints all natural number between the given range.
 */

void printNaturalnumbers(int lowerlimit , int upperlimit)
{
    if(lowerlimit > upperlimit)
    return ;
    {

    
    printf("%d\n", lowerlimit);
    }
    // Recursively call the function to print next number

    printNaturalnumbers(lowerlimit + 1 , upperlimit);
}