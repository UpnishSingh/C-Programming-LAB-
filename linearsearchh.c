#include <stdio.h>

// Function to perform linear search on an array
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index if the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int n, key;

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
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to be searched
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Perform linear search on the array
    int result = linearSearch(arr, n, key);

    // Display the result
    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
