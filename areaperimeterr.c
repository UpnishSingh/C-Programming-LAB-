#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    int choice;
    double radius, side, length, width, area, perimeter;

    // Display menu to the user
    printf("Choose a shape:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    // Perform calculations based on user choice
    switch (choice) {
        case 1:
            // Circle
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            area = PI * pow(radius, 2);
            perimeter = 2 * PI * radius;
            break;

        case 2:
            // Square
            printf("Enter the side length of the square: ");
            scanf("%lf", &side);
            area = pow(side, 2);
            perimeter = 4 * side;
            break;

        case 3:
            // Rectangle
            printf("Enter the length of the rectangle: ");
            scanf("%lf", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%lf", &width);
            area = length * width;
            perimeter = 2 * (length + width);
            break;

        default:
            printf("Invalid choice.\n");
            return 1;
    }

    // Display the results
    printf("Area: %.2lf\n", area);
    printf("Perimeter: %.2lf\n", perimeter);

    return 0;
}
