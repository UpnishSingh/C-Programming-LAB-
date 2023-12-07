#include<stdio.h>
int main()
{
    int a,b,choice,bill;
    printf("Enter the amount of units at the begning of the month:");
    scanf("%d",&a);
    printf("enter the units at the end of the month:");
    scanf("%d",&b);
    choice=b-a;
    if(choice<100)
    {
        bill=choice*1.5;
        printf("the bill is:%d",bill);
    }
    else if (choice>100&&choice<200)
    {
     bill 
    }

    }
