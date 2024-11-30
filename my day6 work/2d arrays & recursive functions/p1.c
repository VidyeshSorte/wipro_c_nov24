//Find sum of 2 matrices

#include <stdio.h>
#include <stdlib.h>

void addMatrices(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) 
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to print a matrix
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
        printf("Usage: %s <rows> <cols> <matrix1_elements> <matrix2_elements>\n", argv[0]);
        return 1;
    }

    int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];
    // Read the elements of the first matrix
    int index = 3;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            if (index < argc) 
            {
                matrix1[i][j] = atoi(argv[index]);
                index++;
            } else {
                printf("Not enough elements provided for Matrix 1.\n");
                return 1;
            }
        }
    }

    // Read the elements of the second matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (index < argc) {
                matrix2[i][j] = atoi(argv[index]);
                index++;
            } else {
                printf("Not enough elements provided for Matrix 2.\n");
                return 1;
            }
        }
    }

    // Add the two matrices
    addMatrices(rows, cols, matrix1, matrix2, result);
    printf("Sum of the two matrices is:\n");
    printMatrix(rows, cols, result);
}