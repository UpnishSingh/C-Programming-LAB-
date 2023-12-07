/*
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",&c);
    return 0;
    
}
*/
#include<stdio.h>
int main() 
{
    int rows=3;
    int columns=3;
    int matrix[3][3] = {1,2,3,4,5,6,7,8,9};
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {printf("%d",matrix[i][j]);
        }
        printf("\n");    
        
        
    }
    return 0;

}
