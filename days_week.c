//C program to print day of week using array constant.

#include<stdio.h>
int main()
{
    const char  * WEEKS[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int week;
    //Input week number from user:
     printf("Enter Week Number(1-7):");
     scanf("%d",&week);

     if(week > 0 && week < 8)
     {
          //Print week name using array index 
         printf("%s", WEEKS[week-1]);
         
     }
     else
     {
         printf("Invalid Input! Please enter week days between 1 to 7.");
     }
     return 0;
}



