#include<stdio.h>
int main()
{
    int a,b,c; 
    printf("enter a number:");
    scanf("%d\n",&a);

    for(b=1;b<=20;b++)
    {   
        c=b*a;
        printf("%d*%d=%d\n",a,b,c);
    }
    return 0;
}