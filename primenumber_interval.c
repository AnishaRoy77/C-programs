//C program to list all prime number between an interval using function.

#include<stdio.h>
 int isPrime(int num);
 void printPrimes(int lowerlimit , int upperlimit);


 int main()
 {
   int lowerlimit , upperlimit;
    printf("Enter the upper limit & lower limit to list the primes : ");
    scanf("%d%d", &lowerlimit , & upperlimit);

    printPrimes(lowerlimit , upperlimit);
     return 0;
 }
  //Print all prime numbers between lower limit and upper limit.

  void printPrimes(int lowerlimit , int upperlimit)
  {
      printf( "All prime number between %d to %d are :", lowerlimit , upperlimit);
       while(lowerlimit <= upperlimit)
       {
           // Print if current number is prime.
           if(isPrime(lowerlimit))
           {
               printf("%d\n", lowerlimit);
           }
           lowerlimit++;
       }
  }

/** 
 * Check whether a number is prime or not. 
 * Returns 1 if the number is prime otherwise 0. 
 */  
 int isPrime(int num)
 {
     int i;
     for(i=2; i<=num/2 ; i++)
     {    
        /*   
         * If the number is divisible by any number   
         * other than 1 and self then it is not prime  
         */    
        if(num % i == 0)    
        {  
            return 0;  
        }    
    }   
      
    return 1;   
}
 