#include <stdio.h>
int main() {
    int size, i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int index = 0;

    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }
    printf("Maximum element: %d\n", max);
    printf("Index of the maximum element: %d\n", index);

    return 0;
}
