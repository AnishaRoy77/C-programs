//   C program to find power of a number using recursion
 #include<stdio.h>

 //power function declaration
 double pow(double  base , int expo);
  int main()
  {
      int expo;
      double base , power;

      //Input base and exponent from user
      printf("Enter Base : ");
      scanf("%lf", &base);
      printf("Enter Exponent : ");
      scanf("%d", &expo);
      
      //call pow function

      power = pow(base , expo);

      printf("%.2lf ^ %d = %f", base, expo, power);
    
    return 0;
}


/**
 * Calculate power of any number.
 * Returns base ^ expo
 */
double pow(double base, int expo)
{
    /* Base condition */
    if(expo == 0)
        return 1;
    else if(expo > 0)
        return base * pow(base, expo - 1);
    else
        return 1 / pow(base, -expo);
}
        