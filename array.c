#include<stdio.h>
int main()
{
    int marks[5];
    int i;

    for(i=0;i<5;i++)

{
    printf("Enter the value of marks for students %d\n", i+1);
    scanf("%d",&marks[i]);
}
for(i=0;i<5;i++)
{
printf("The value of marks of students  %d is %d\n", i+1,marks[i]);

}
return 0;

}
