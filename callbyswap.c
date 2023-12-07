#include<stdio.h>
int swap(int,int);
int main()
{
    int a=10,b=20;
    printf("a=%d,b=%d",a,b);
    swap(a,b);
    printf("\nAfter swapping:");
    printf("a=%d b=%d",a,b);
}
int swap(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("\nAfter Swapping:");
    printf("\na=%d b=%d",a,b);
}
     

     