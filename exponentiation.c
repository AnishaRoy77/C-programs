//find exponentiation
 #include<stdio.h>
 int main()
 {
 	int a,b,exp=1;
 	scanf("%d%d",&a ,&b);
 	while(b!=0)
 	{
 		exp=exp*a;
 		b--;

	 }
    printf("%d",exp);
    
 }
