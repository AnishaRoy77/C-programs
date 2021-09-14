#include<stdio.h>
#include<math.h>
int main(){
     float side;
     //int side;
     //int area;
     float area;
     printf("Enter the side  of  square\n");
     scanf("%f", &side);
   
     area = pow(side,2);
    printf("The area of square  is %.3f", (float)(area));
    return 0;

}