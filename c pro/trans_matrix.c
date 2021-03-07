// Write a program to print transpose of a matrix.

#include <stdio.h>

void transMatrix()
{
    int rows, cols;
    int transRows, transCols;

    printf("Enter the dimesions of matrix:\n");
    printf("xEnter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    transRows = cols;
    transCols = rows;
    int matrix[rows][cols];
    int transMatrix[cols][rows];

    printf("\nEnter a %d X %d matrix \n", rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe entered matrix is \n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        putchar('\n');
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transMatrix[j][i] = matrix[i][j];
        }
        putchar('\n');
    }

    printf("The transpose of matrix is \n");

    for (int i = 0; i < transRows; i++)
    {
        for (int j = 0; j < transCols; j++)
        {
            printf("%d\t", transMatrix[i][j]);
        }
        putchar('\n');
    }
}