#include<stdio.h>
int main()
{
    int a,c;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=10;i<200;i++)
    {
     i+=9;
     c=i+i;
     printf("%d",a);
        
    }
    return 0;
}