#include<stdio.h>
int main()
{
	int ID = 500;
	int password = 000;
	printf("PLEASE ENTER YOUR  ID:\n");
	scanf("%d",& ID);
	switch(ID)
	{
		case 500 :
			printf("ENTER YOUR PASSWORD :\n");
			scanf("%d", & password);
			switch( password)
			{
				case 000:
					printf("WELCOME DEAR PROGRAMMER\n");
					break;
					default:
						printf("INCORRECT PASSWORD\n ");
						break;
						
			}
			break;
			default:
				printf("INCORRECT ID \n");
				break;
	}
	
	
}
