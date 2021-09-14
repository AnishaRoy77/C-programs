//fibonacci series
#include<stdio.h>
int main()
{
 int n,i,t1=0 ,t2=1 ,nextTerm;
 printf("enter the number of terms \n");
 scanf("%d",&n );
 printf("fibonacci series : \n");
 
 for(i=1;i<=n;++i)
 {
 printf(" %d," ,t1);
 
 
 nextTerm = t1+t2;
 t1=t2;
 t2=nextTerm;

}
 return 0;
}
