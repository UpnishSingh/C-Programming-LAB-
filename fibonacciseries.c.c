#include<stdio.h>
void main()
{
    int f=0,s=1,n,i;
    printf("Enter the number of terms:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("%d\n",f);
        int next=f+s;
        f = s;
        s= next;

    }
}