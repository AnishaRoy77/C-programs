//c program to check perfect , armstrong and prime using functions

#include<stdio.h>
#include<math.h>
  
//Function Declarations
 int isPrime(int num);
 int isPerfect(int num);
 int isArmstrong(int num);

 int main()
 {
     int num;
     printf("Enter any number :\n" );
     scanf("%d", &num);

    //call isPrime(int num) function
     
    if isPrime( (num))
       {
           printf("%d is Prime number.\n", num);

      }
      else
      {
          printf("%d is not a Prime number.\n", num);
      }
    
       
    //call isPerfect(int num) function
    if isPerfect(num)
    {
        printf("%d is Perfect number.\n",num);
    }
    else
    {
        printf("%d is not a perfect number.\n", num);
    }
    //call isArmstrong(int num) function
    if isArmstrong(num)
    {
        printf("%d is Armstrong Number.\n", num);
            }
            return 0;
 }

 //Check whether a number is prime or not. 
 //Returns 1 if the number is prime otherwise 0.
  
  int isPrime(int num)
  {
      int i;
      for(i=2; i<=num/2; i++)
      {
          //Check whether a number is prime or not. 
         //Returns 1 if the number is prime otherwise 0

         if(num % i == 0)
         {
             return 0;
         }
      }
      return 1;

  }

  //Check whether the number is perfect number or not. 
 // Returns 1 if the number is perfect otherwise 0.

 int isPerfect(int num) 
{
    int i, sum, n;
    sum = 0;
    n = num;
    
    for(i=1; i<n; i++)  
    {  
        /* If i is a divisor of num */  
        if(n%i == 0)  
        {  
            sum += i;  
        }  
    }
    
    return (num == sum);
}

  //Check whether a number is armstrong number or not. 
  //Returns 1 if the number is armstrong number otherwise 0 .

  int isArmstrong(int num)
  {
      int lastdigit , sum , originalnum , digits ;
      sum = 0;
       originalnum = num;
       // Find total digits in num
       digits = (int) log10(num)+1 ;
       
       //  Calculate sum of power of digits

        while(num > 0)
    {
        // Extract the last digit
        lastdigit = num % 10;

        // Compute sum of power of last digit
        sum = sum + round(pow(lastdigit, digits));

        // Remove the last digit
        num = num / 10;
    }
    
    return (originalnum == sum);
}
       
       
        
   