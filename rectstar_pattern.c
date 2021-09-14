//C program to print rectangle star pattern

#include<stdio.h>
 int main()
 {
     int i , j , rows , columns ;
     printf("Enter no of Rows : ");
     scanf("%d", &rows);
     printf("Enter no columns : ");
     scanf("%d", &columns);

     for(i=1; i<=rows ; i++)
     {
         for(j=1 ; j<=columns ; j++)
         {
             printf("*");
            

         }
         printf("\n");
     }
 }