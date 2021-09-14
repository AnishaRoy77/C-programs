/**
 * C program to find cube of any number using function
 */

#include<stdio.h>
//function declaration
double cube(double num);
 int main()
 {
    int num;
     double c;
     //enter number to find cube  from the user
     printf("Enter number you want cube of :\n");
     scanf("%d", &num);
     c = cube(num);
     printf(" cube of %d is %f", num , c);
      return 0;


 }
  double cube(double num)
  {
      return (num * num * num);
  }