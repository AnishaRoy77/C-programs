#include <stdio.h>

int main()
{
 char str[] = "Hey! Myself Anisha Roy";
 char *ptr = str;
 
 while(*ptr!='\0')
 {
 
 printf("%c",*ptr);
 ptr++;
 }
 

    return 0;
}

