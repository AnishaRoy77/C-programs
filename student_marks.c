//Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer, calculate percentage and grade according to given conditions:
/*If percentage >= 90% : Grade A
If percentage >= 80% : Grade B
If percentage >= 70% : Grade C
If percentage >= 60% : Grade D
If percentage >= 40% : Grade E
If percentage < 40% : Grade F */

#include<stdio.h>
#include<conio.h>
int main()
{
 int phy ,chem, bio, maths , computer;
 float per;
  
  printf("enter marks of phy\n,chem\n,bio\n,maths\n,computer\n\n");

  scanf("%d%d%d%d%d", &phy , &chem , &bio , &maths , &computer);
per = (phy+chem+bio+maths+computer)/5.0;
printf("percentage = %2.f\n", per);

 if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}