#include<stdio.h>
int main()
{
	int age ;
	int weight;
	printf("Please enter your age\n");
	scanf("%d",&age);
	switch(age)
	{
		case 18:
			printf("Enter your Weight:\n");
			scanf("%d", &weight);
			switch(weight)
			{
				case 55:
					printf("You are fit \n");
					break;
					default:
						printf("you are obese\n");
						break;
			}
			break;
			default:
				printf("invalid input\n");
				break;
			
	}
}
