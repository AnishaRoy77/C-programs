//program to check whether the entered number is less than 25
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;

	printf("enter one value");
	scanf("%d",&i);
	if( i<=25)
	printf("the entered no %d is <25",i);
	else
	printf("the entered no is not<25");
	getch();
}
