#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age\n");
	scanf( "%d ",&age);
	
	 switch(age)
	 {
	 
	  case 6:
	  printf( "The age is 3 ");
	  break;
	  
	   case 16:
	   	printf("The age is 16 and you are still a teenager");
	   	break;
		   	   	 case 26:
	   	 	printf( "The age is 20");
	   	 	break;
	   	 	
	   	 	 default:
	   	 	printf(" The age is not 6, 16,26");
	   	 	break;
	   	 }
	   	 return 0 ;
	   }
