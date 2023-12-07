#include <stdio.h>

int main() {
    int number, originalNumber, remainder, sum = 0;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Store the original number for later comparison
    originalNumber = number;

    // Calculate the sum of digits using a while loop
    while (number != 0) {
        remainder = number % 10;
        sum += remainder;
        number /= 10;
    }

    // Display the result
    printf("Sum of digits of %d = %d\n", originalNumber, sum);

    return 0;
}
