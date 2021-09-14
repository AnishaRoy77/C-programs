#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the value of number whose multiplication table is to be printed\n");
    scanf("%d", &num);
    printf("The multiplication table of %d is\n",num );
    for(i=0;i<10;i++)
    {
        printf("%d * %d = %d\n",num,i+1,(i+1)*num);

    }
    return 0;
    

}
