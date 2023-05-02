#include <stdio.h>

#define MAX_ROWS 5
#define MAX_COLS 5

int matrix1[MAX_ROWS][MAX_COLS];
int result[MAX_ROWS][MAX_COLS];

void getRowSize(int *rows, int *cols);
void getMatrix(int rows, int cols, int array[MAX_ROWS][MAX_COLS]);
void printMatrix(int rows, int cols, int array[MAX_ROWS][MAX_COLS]);
int maxOfMatrix(int matrix1[MAX_ROWS][MAX_COLS], int rows, int cols);

int main()
{
    int rows, cols;
    getRowSize(&rows, &cols);
    getMatrix(rows, cols, matrix1);
    printMatrix(rows, cols, matrix1);
    maxOfMatrix(matrix1, rows, cols);
}

void getRowSize(int *rows, int *cols)
{
    printf("Enter your row size: ");
    scanf(" %d", rows);

    printf("Enter your column size: ");
    scanf(" %d", cols);
}

void getMatrix(int rows, int cols, int array[MAX_ROWS][MAX_COLS])
{
    printf("Enter your matrix elements: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf(" %d", &array[i][j]);
        }
    }
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

int maxOfMatrix(int matrix1[][MAX_COLS], int rows, int cols)
{
    int max = 0;
    int max_row = 0;
    int max_col = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix1[i][j] > max)
            {
                max = matrix1[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }
    printf("The max number of this matrix is: %d\n", max);
    printf("The row and column indices of max is: matrix[%d][%d]", max_row, max_col);
}
