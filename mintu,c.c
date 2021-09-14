#include<stdio.h>
#include<conio.h>

	int main()
	{
	int score=0;
	int name;
	int a,b,c,d,e;
	printf("Hello ! Welcome to the Quiz \n\n");
	printf("There are 5 Questions\n\n");
	printf("Choose Your Answers carefully.\n\n");
	printf("If the  answer is correct to +5 points\n\n");
	printf("If the answer is wrong to -1 \n\n");
	

	printf("Please Enter Your Name\n\n:");
	scanf("%d\t",&name);
	printf("All The Best\n\n");
		printf("So lets Start The Quiz\n\n");
	printf("(Q.1. Fastest shorthand writer was\n");
	printf("[1]Dr.G. D. Bist\t	[2]J.R.D. Tata\n [c]J.M. Tagore\t [d]Khudada Khan\n");
	
	scanf("%d",&a);
	
	if(a==1)
	{
	printf("Answer is Correct\t");
	
	score=score+5;
	
	printf("Your current Score is: %d\n\n",score);
	}
	else
	{
		printf("Wrong Answer\t");
		score=score-1;
		printf("your current score is: %d\n\n",score);
			}
		}

	
