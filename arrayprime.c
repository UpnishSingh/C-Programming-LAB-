#include<stdio.h>
int prime(int num){
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n], i;
    int s1 = 0;
    int s2=0;
    printf("Enter the array variables:\n");

    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
        
    if(prime(a[i])){
           s1=s1+a[i];
        }else(s2=s2+a[i]);
    }printf("Sum of prime numbers in the array = %d\n",s1);
    printf("Sum of not  prime numbers in the array = %d\n",s2);

    return 0;
}