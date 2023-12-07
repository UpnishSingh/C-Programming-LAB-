#include<stdio.h>
int  main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n],i,sum=0,sum1=0;
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        sum=sum+a[i];
        else
        sum1=sum1+a[i];

    } 
    printf("Sum of the even elements in the array=%d",sum);
    printf("Sum of the odd elements in the array=%d",sum1);
    return 0;

}

