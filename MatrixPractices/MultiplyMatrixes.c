#include <stdio.h>
#define MAX_ROWS 5
#define MAX_COLS 5

int matrix1[MAX_ROWS][MAX_COLS];
int matrix2[MAX_ROWS][MAX_COLS];
int result[MAX_ROWS][MAX_COLS];

int printMatrix(int rows, int cols, int array[MAX_ROWS][MAX_COLS]);
int getMatrix(int rows, int cols, int array[MAX_ROWS][MAX_COLS]);
void getMatrixSize(int *rows, int *cols, int *count);
int multiplyMatrix();

int main()
{
    int rows1, cols1, rows2, cols2; 
    int matrix_count = 1;
    
    getMatrixSize(&rows1, &cols1, &matrix_count);                 // Getting the Row-Column size for matrix 1
    getMatrix(rows1, cols1, matrix1);                           // Getting Matrix 1 elements and printing            
    printMatrix(rows1, cols1, matrix1);  


    getMatrixSize(&rows2, &cols2, &matrix_count);                // Getting the Row-Column size for matrix 2
    getMatrix(rows2, cols2, matrix2);                           // Getting Matrix 2 elements and printing
    printMatrix(rows2, cols2, matrix2);

    multiplyMatrix(rows1, cols1, rows2, cols2);
}

int printMatrix(int rows, int cols, int array[MAX_ROWS][MAX_COLS])  // Print inputed matrix.
{
    printf("\n");
    if (array == matrix1)
    {
        printf("Matrix 1:\n");
    }                              // Saying which matrix it is.
    else if (array == matrix2)
    {
        printf("Matrix 2:\n");
    }
    else 
    {
        printf("Result: \n");
    }


    for (int i = 0; i < rows; i++)         
    {
        for (int j = 0; j < cols; j++)       
        {                                    // Printing out the inputed matrix as a table.
            printf(" %d ", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int getMatrix(int rows, int cols, int array[MAX_ROWS][MAX_COLS])  // Getting the elements of the matrix from the user.
{
    printf("Enter the numbers of the matrix!: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {                                   // One by one adding the elements to the matrix.
            scanf(" %d", &array[i][j]);
        }
    }
    return 0;
}

void getMatrixSize(int *rows, int *cols, int *count) 
{
    printf("Enter the number of rows for matrix %d: ", *count);
    scanf(" %d", rows);

    printf("Enter the number of columns for matrix %d: ", *count);
    scanf(" %d", cols);
    *count += 1;
}

int multiplyMatrix(int rows1, int cols1, int rows2, int cols2)
{
    int i = 0, j = 0;

    // Ensure that the number of columns in matrix1 is the same as the number of rows in matrix2
    if (cols1 != rows2)
    {
        printf("Error: Matrix dimensions do not match!");
        return 1;
    }

    // Multiply the matrices and store the result in result[][]
    for (i; i < rows1; i++)
    {
        result[i][j] += matrix1[i][j] * matrix2[i][j];

        if (i >= rows1 -1 && j < cols1)
        {
            j++;
            i -= rows1;
        }
    }

    // Print the resulting matrix
    printMatrix(rows1, cols2, result);

    return 0;
}  
