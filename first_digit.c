#include<stdio.h>
int main(){
    int n , first ;
    printf("Enter any number : ");
    scanf("%d", &n);
     first = n ;
      while(first >= 10)
      {
          first = first / 10 ;
      }
          printf("The first digit of the number is : %d", first);
           
      
      return 0 ;
}