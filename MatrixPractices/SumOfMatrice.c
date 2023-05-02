#include <stdio.h>
// Write a C program that takes a matrix as input and calculates the sum of each row and column, and displays the results.

//      Sum of Row 1: ---
//      Sum of Row 2: ---
//      Sum of Row 3: ---
//      Sum of Column 1: ---
//      Sum of Column 2: ---
//      Sum of Column 3: ---
//      Sum of the whole matrice: 

#define MAX_ROWS 10
#define MAX_COLS 10
int matrix[MAX_ROWS][MAX_COLS];

int getInput();
int printMatrix(int rows, int columns);
int sumOfRow(int rowNum);
int sumOfColumn(int colNum);
int sumOfAll();

int main()
{
    int rows, cols; 

    printf("Enter the number of rows for the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns for the matrix: ");
    scanf("%d", &cols);
    getInput(rows, cols);

    printf("\n");
    printMatrix(rows, cols);

    for (int i = 1; i < rows + 1; i++)
    {
        printf("Sum of Row %d: %d\n", i, sumOfRow(i - 1));
    } printf("\n");


    for (int i = 1; i < cols + 1; i++)
    {
        printf("Sum of Column %d: %d\n", i, sumOfColumn(i - 1));
    } printf("\n");

    printf("Sum of All: %d\n", sumOfAll()); 
    printf("\n");
    return 0;

}

int getInput(int rows, int cols)  
{
    printf("Enter the numbers of the matrix!: \n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    return 0;
}

int printMatrix(int rows, int columns)
{
    printf("Matrix:\n");
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int sumOfRow(int rowNum)    // Calculates the sum of a given row.
{
    int sum = 0;
    for (int i = 0; i < MAX_COLS; i++)
    {
        sum += matrix[rowNum][i];
    }
    return sum;
}

int sumOfColumn(int colNum) // Calculates the sum of a given column.
{
    int sum = 0;
    for (int i = 0; i < MAX_ROWS; i++)
    {
        sum += matrix[i][colNum];
    }
    return sum;
}

int sumOfAll()     // Prints the Sum of all.
{
    int sum = 0;

    for (int i = 0; i < MAX_ROWS; i++)
    {
        for (int j = 0; j < MAX_COLS; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

