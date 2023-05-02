#include <stdio.h>

#define MAX_ROWS 5
#define MAX_COLS 5
int matrix1[MAX_ROWS][MAX_COLS];
int matrix2[MAX_ROWS][MAX_COLS];
int result[MAX_ROWS][MAX_COLS];

int getRowSizes(int *rows, int *cols, int *matrix_count);
int getMatrix(int rows, int cols, int array[MAX_ROWS][MAX_COLS]);
int printMatrix(int rows, int cols, int array[MAX_ROWS][MAX_COLS]);
int sumOfMatrixes(int rows, int cols);

int main()
{
    int rows1, cols1, rows2, cols2, matrix_count;
    matrix_count = 1;

    getRowSizes(&rows1, &cols1, &matrix_count);
    getMatrix(rows1, cols1, matrix1);
    printMatrix(rows1, cols1, matrix1);

    getRowSizes(&rows2, &cols2, &matrix_count);
    getMatrix(rows2, cols2, matrix2);
    printMatrix(rows2, cols2, matrix2);

    sumOfMatrixes(rows1, cols2);
}

int getRowSizes(int *rows, int *cols, int *matrix_count)
{
    printf("Enter your row size for Matrix %d: ", *matrix_count);
    scanf(" %d", rows);

    printf("Enter your column size for Matrix %d: ", *matrix_count);
    scanf(" %d", cols);
    *matrix_count += 1;
    return 0;
}

int getMatrix(int rows, int cols, int array[MAX_ROWS][MAX_COLS])
{
    printf("Enter the elements for the matrix: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf(" %d", &array[i][j]);
        }
    }
    return 0;
}

int printMatrix(int rows, int cols, int array[MAX_ROWS][MAX_COLS])
{
    printf("\n");
    if (array == matrix1)
    {
        printf("Matrix 1: \n");
    }
    else if (array == matrix2)
    {
        printf("Matrix 2: \n");
    }
    else
    {
        printf("Sum of the 2 matrixes: \n");
    }
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int sumOfMatrixes(int rows1 , int cols2)
{
    if (rows1 != cols2)
    {
        printf("The matrix dimensions should match!");
        return 0;
    }

    int result[MAX_ROWS][MAX_COLS] = {0};   

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];   
        }
    }

    printMatrix(rows1, cols2, result);
    return 0;
}

