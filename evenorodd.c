//Write a program to check given character is even or odd by using Ternary/Conditional operators.


#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    (a%2==0) ? printf("It is even") : printf("It is odd");
    return 0; 
}