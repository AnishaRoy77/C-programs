#include<stdio.h>
int main()
{
    float length , width , perimeter;
     printf("Enter length of the rectangle\n",length);
     scanf("%f", &length);
     
     printf("Enter width of the rectangle\n", width);
     scanf("%f", &width);
     
     perimeter = 2*(length + width);
      printf("The perimeter of the rectangle  is %f\n",perimeter);
      return 0;
           }