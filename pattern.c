#include <stdio.h>

int main()
 {
    int rows, i, a;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
     {
        for (a = 1; a<= i; a++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}      