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
			
			case 19:
					printf("Enter your Weight:\n");
			scanf("%d", &weight);
			
				
			
			switch(weight)
			{
				case 55:
					printf("You are fit \n");
					break;
					case 56:
							printf("You are fit \n");
							break;
							case 57:
									printf("You are fit \n");
									break;
									case 58:
											printf("You are fit \n");
											break;
											case 59:
											printf("You are fit \n");
											break;
											case 60:
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
