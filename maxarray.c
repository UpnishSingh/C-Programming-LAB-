#include <stdio.h>
int Max(int arr[], int s) {
    int max = arr[0];
    for (int i = 1; i < s; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int s;

    printf("Enter the size of the array: ");
    scanf("%d", &s);
    int arr[s];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < s; i++) {
        scanf("%d", &arr[i]);
    }
    int maxElement = Max(arr, s);
    printf("The maximum element in the array is: %d\n", maxElement);

    return 0;
}
