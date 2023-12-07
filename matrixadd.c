#include<stdio.h>
int main()
{  int n,m,i,j;
printf(" enter the limits");
scanf("%d%d",&m,&n);
int a[m][n];
printf("array elements");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
int b[m][n];
printf ("array elements");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
scanf("%d",&b[i][j]);
}
int c[m][n];
printf("array elements on sum of a&b:\n");
for(i=0;i<m;i++){
    for(j=0;j<m;j++)
    c[i][j]=a[i][j]+b[i][j];
}

 printf("the matrix is...\n");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
printf("%d\t",c[i][j]);
printf("\n");
} 
return 0;
}