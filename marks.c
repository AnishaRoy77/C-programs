
	// printing program
#include<stdio.h>
int main()
{
	int m,s,pm=50; // m for marks in mathematics and s for marks in science pm for pass marks
	printf("\n Enter marks in mathematics:- ");
	scanf("%d",&m);
	printf("\n Enter marks in science:- ");
	scanf("%d",&s);
	if(m>=50  && s<50)
	printf("\n You will get 15 Rupees because you have passed in mathematics only");
	else if(m<50 && s>=50)
    printf("\n You will get 15 Rupees because you have paseed in Science only ");
	else if(m>=50 && s>=50)
	printf("\n You will get 45 Rupees because you have passed in both of the subjects");
	else
	printf("\n Alas! You failed in both of the subjects and you will not get any money");
	return 0;	
}
