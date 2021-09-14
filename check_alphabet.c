#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character\n");
    scanf("%c",&ch);
    (ch>='a'&& ch>='z')||(ch>='A'&& ch>='Z') ? printf("It is an Alphabet\n") : printf("It is not an Alphabet\n");
    return 0;
    
}