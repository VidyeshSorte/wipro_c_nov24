// Find the transpose of a matrix

#include <stdio.h>
#include <stdlib.h>

void transposeMatrix(int rows, int cols, int matrix[rows][cols], int transpose[cols][rows]) 
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            transpose[j][i] = matrix[i][j]; // Swap rows and columns
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) 
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]) 
{
    if (argc < 5) 
    {
        printf("Usage: %s <rows> <cols> <matrix_elements>\n", argv[0]);
        return 1;
    }

    int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);
    int matrix[rows][cols], transpose[cols][rows];

    int index = 3;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (index < argc) {
                matrix[i][j] = atoi(argv[index]);
                index++;
            } else {
                printf("Not enough elements provided for the matrix.\n");
                return 1;
            }
        }
    }

    transposeMatrix(rows, cols, matrix, transpose);
    printf("Original Matrix:\n");
    printMatrix(rows, cols, matrix);
    printf("Transpose of the Matrix:\n");
    printMatrix(cols, rows, transpose);
}