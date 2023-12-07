#include<stdio.h>

int main()
{
    int num,digit,duplicate,sum=0,count=0;
    printf("Enter an integer:")
    scanf("%d",&num);
    while(duplicate!=0)
    {
        duplicate/=10;
        count++;
    }
    while(duplicate!=0)
    {
        digit=duplicate%10;
        sum+=pow(digit,count);
        duplicate/=10;
    }
    if(sum==num)
    {
        printf("It is a Armstrong number");
    }
    else
    {
        printf("It is not a Armstrong");
    }
    return 0;
}