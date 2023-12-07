#include<stdio.h>  
  void main()
  {int m,n;
  printf(" enter the a matrix limit");
  scanf("%d%d",&m,&n);
  printf(" enter the b matrix limit");
  scanf(" %d%d",&m,&n);
  int a[m][n],b[m][n];

 if (n!=m)
 printf("matrix multiplication not possible");
 else
 {printf(" enter a matrix elements ");
 int i,j,k;
 for(i=0;i<m;i++)
 {
    for(j=0;j<n;i++)
scanf("%d",a[i][j]);
} 
 printf("enter the elements of b matrix");
 for(i=0;i<m;i++)
 {for (j=0;j<n;j++)
 
 scanf("%d",b[i][j]);
}
 int c[m][n];
 for(i=0;i<m;i++)
 {for(j=0;j<n;j++)
 {c[i][j]=0;
  for(k=0;k<m;k++)
  { c[i][j]= c[i][j]+(a[i][k]*b[k][j]);}//main line performing the multiplication
}
} printf(" resultant matrix");
 for(i=0;i<m;i++)
 {for(j=0;j<n;j++)
 printf("%d\t",c[i][j]);
 printf("\n");
}
}   
}