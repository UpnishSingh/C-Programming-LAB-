#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void multiplyMatrices(int firstMatrix[MAX_ROWS][MAX_COLS], int secondMatrix[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rowsFirst, int colsFirst, int rowsSecond, int colsSecond) {
    // Initializing elements of matrix mult to 0
    for(int i = 0; i < rowsFirst; ++i) {
        for(int j = 0; j < colsSecond; ++j) {
            result[i][j] = 0;
        }
    }

    // Multiplying firstMatrix and secondMatrix and storing in result
    for(int i = 0; i < rowsFirst; ++i) {
        for(int j = 0; j < colsSecond; ++j) {
            for(int k = 0; k < colsFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rowsFirst, colsFirst, rowsSecond, colsSecond;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rowsFirst, &colsFirst);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rowsSecond, &colsSecond);

    // Check if multiplication is possible
    if(colsFirst != rowsSecond) {
        printf("Error! Number of columns in the first matrix should be equal to the number of rows in the second matrix.\n");
        return 1; // Exit with an error code
    }

    int firstMatrix[MAX_ROWS][MAX_COLS], secondMatrix[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];

    printf("Enter elements of matrix 1:\n");
    for(int i = 0; i < rowsFirst; ++i) {
        for(int j = 0; j < colsFirst; ++j) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for(int i = 0; i < rowsSecond; ++i) {
        for(int j = 0; j < colsSecond; ++j) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    multiplyMatrices(firstMatrix, secondMatrix, result, rowsFirst, colsFirst, rowsSecond, colsSecond);

    printf("Product of matrices:\n");
    displayMatrix(result, rowsFirst, colsSecond);

    return 0;
}
