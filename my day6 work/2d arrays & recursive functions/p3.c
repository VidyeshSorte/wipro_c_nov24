// Find product of 2 matrices

#include <stdio.h>
#include <stdlib.h>

void multiplyMatrices(int rows1, int cols1, int matrix1[rows1][cols1], 
                      int rows2, int cols2, int matrix2[rows2][cols2], 
                      int result[rows1][cols2]) {
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible. Columns of Matrix 1 must be equal to rows of Matrix 2.\n");
        return;
    }

    // Initialize the result matrix with zeros
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]) {
    if (argc < 5) {
        printf("Usage: %s <rows1> <cols1> <rows2> <cols2> <matrix1_elements> <matrix2_elements>\n", argv[0]);
        return 1;
    }

    int rows1 = atoi(argv[1]);
    int cols1 = atoi(argv[2]);
    int rows2 = atoi(argv[3]);
    int cols2 = atoi(argv[4]);

    // Check if matrix multiplication is possible
    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible. Columns of Matrix 1 must be equal to rows of Matrix 2.\n");
        return 1;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];

    // Read the elements of the first matrix from command-line arguments
    int index = 5;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            if (index < argc) {
                matrix1[i][j] = atoi(argv[index]);
                index++;
            } else {
                printf("Not enough elements provided for Matrix 1.\n");
                return 1;
            }
        }
    }

    // Read the elements of the second matrix from command-line arguments
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            if (index < argc) {
                matrix2[i][j] = atoi(argv[index]);
                index++;
            } else {
                printf("Not enough elements provided for Matrix 2.\n");
                return 1;
            }
        }
    }

    // matrix multiplication
    multiplyMatrices(rows1, cols1, matrix1, rows2, cols2, matrix2, result);

    printf("Matrix 1:\n");
    printMatrix(rows1, cols1, matrix1);

    printf("Matrix 2:\n");
    printMatrix(rows2, cols2, matrix2);

    printf("Product of Matrix 1 and Matrix 2:\n");
    printMatrix(rows1, cols2, result);

    return 0;
}