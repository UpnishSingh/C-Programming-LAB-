#include<stdio.h>
void main()
{
    int add(int,int);
    int sub(int,int);
    int mul(int,int);
    int div(int,int);
    int a,b,c;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    printf("\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n");
    printf("Enter the choices:");
    int ch;
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
        c=add(a,b);
        printf("Sum=%d",c);
        break;
        case 2:
        c=sub(a,b);
        printf("Subtract=%d",c);
        break;
        case 3:
        c=mul(a,b);
        printf("Multiplication=%d",c);
        break;
        case 4:
        if(b==0){
        printf("Infinity");
        }else
        {
            c=div(a,b);
            printf("Div=%d",c);
        }
        break;
        default:
        printf("Enter correct choice");
    }
    }
    int add(int x,int y)
    {
        int z=x+y;
        return z;
    }
       int sub(int x, int y)
    {
       int z=x-y;
       return z;
    }
    
        int mul(int x, int y)
    {
        int z=x*y;
        return z;
    }
       int div(int x, int y)
    {
        float z=(float)x/(float)y;
        return z;
    }