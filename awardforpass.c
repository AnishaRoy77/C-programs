#include<stdio.h>
int main()
{
	int m , s , pm; //m for mathematics , s for science , pm for passing marks
	printf( "Enter your Mathematics marks :\n");
	scanf( "%d",&m);
	printf( "Enter your science marks :\n");
	scanf("%d", &s);
	if( m>=50 && s<50)
	{
	
		printf( "Congratulations you are pass in mathematics and won 50 rupees as reward \n");
}
	
	else if( s>=50 && m<50)
	{
		
	
	printf( " Congratulations you are pass in science and won 55 rupees as reward  \n");
}
	else if( m>=50 && s>=50)
{

		printf( "Congratulations you are pass in both the subjects and won 100 rupees as reward  \n");
}
			else
{
					
				printf( "You are fail in both the subjects therefore you need to work hard  \n");
	}
			return 0 ;
		}
