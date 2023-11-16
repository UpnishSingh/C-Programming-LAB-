// User input syntax(addition of two numbers for two inputs)

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a and b");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("Sum is %d",c);
    return 0; 
}