#include <stdio.h>

int main() {
    int n, i;
    
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Check if the array size is valid
    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;  // Exit the program with an error code
    }

    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the maximum number and its index
    int max = arr[0];
    int index = 0;

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }

    // Display the result
    printf("Maximum number is: %d\n", max);
    printf("Index of maximum number is: %d\n", index);

    return 0;
}
