#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a Number:");
    scanf("%d/n",&a);
    
    for(b=1;b<=10;b++)
    {
        a=b*b*b;
        printf("%d",&a,&b);
    }
    return 0;
}