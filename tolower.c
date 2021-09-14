// C program to demonstrate 
// example of tolower() function. 

#include<stdio.h>
#include<ctype.h>
 int main()
 {
     // character to be converted to lower case.
      char ch = 'A';
       // convert ch to lowercase using toLower() 
       printf("%c in lowercase is represented as = %c",ch , tolower(ch));
       return 0;
 }