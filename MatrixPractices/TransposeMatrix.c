#include <stdio.h>

#define MAX_ROWS 5
#define MAX_COLS 5

int matrix[MAX_ROWS][MAX_COLS];
int result[MAX_ROWS][MAX_COLS];

void getMatrixSize(int *rows, int *cols);
void getMatrix(int rows, int cols, int array[MAX_ROWS][MAX_COLS]);
void printMatrix(int rows, int cols, int array[MAX_ROWS][MAX_COLS]);
void transposeMatrix(int rows, int cols);

int main()
{
    int rows, cols;
    getMatrixSize(&rows, &cols);
    getMatrix(rows, cols, matrix);
    printMatrix(rows, cols, matrix);
    transposeMatrix(rows, cols);

}

void getMatrixSize(int *rows, int *cols)   // Gets the Rows - Columns sizes
{
    printf("Enter your row size: ");
    scanf(" %d", rows);

    printf("Enter your column size: ");
    scanf(" %d", cols);
}

void getMatrix(int rows, int cols, int array[MAX_ROWS][MAX_COLS])    // Gets the elements of the matrix from the user
{
    printf("Enter the numbers of the matrix!: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf(" %d", &array[i][j]);
        }
    }
    printf("\n");
}

void printMatrix(int rows, int cols, int array[MAX_ROWS][MAX_COLS])
{
    printf("Your matrix: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void transposeMatrix(int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix[i][j];    // Set result to current matrix
        }
    }

    printf("Transposed matrix: \n");
    for (int i = 0; i < cols; i++)          // Switch the row and column numbers
    {
        for (int j = 0; j < rows; j++)
        {
            printf(" %d", result[j][i]);    // and print!
        }
        printf("\n");
    }
    printf("\n");


}