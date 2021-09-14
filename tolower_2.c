#include<ctype.h>
#include<stdio.h>
int main()
{
    int j = 0;
    char str[] = "ANISHA\n";
    // Character to be converted to lowercase 
   // char ch = "A";
    // convert ch to lowercase using toLower()
    char ch;

    while(str[j]){
    ch = str[j];
      // convert ch to lowercase using toLower() 
        putchar(tolower(ch)); 
  
        j++; 
    } 
  
    return 0; 
}     
     

