#include<stdio.h>
void main(){ 
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n],i;
    printf("enter the array element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   int max =a[0];
   int in =0;
   int smax=0;
   int sin=0;
     for (i=1;i<n;i++) {
        if (a[i]>max) {
            smax=max;
            sin=in;
            max=a[i];
            in=i;
        } else if(a[i]>smax) {
            smax=a[i];
            sin=i;
        }
    }
    printf("Maximum number is: %d\n" ,max);
    printf("The second max number is: %d\n", smax);
    printf("Index of the second max number is: %d\n", sin);
}