#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int a = num, sum = 0, n = 0;
    while (a > 0) {
        int digit = a % 10;
        sum += pow(digit, 3);  
        a /= 10; }
    return sum == num;}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}