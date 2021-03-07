// Write a program that display the floyd triangle given below.
//     1
//     0 1
//     1 0 1
//     0 1 0 1
//     1 0 1 0 1

#include <stdio.h>

void printFloyd()
{
    int i, j, k, rows;

    printf("Enter The Number Of Rows: ");
    scanf("%d", &rows);

    for (j = 1; j <= rows; j++)
    {
        i = (j % 2 == 1) ? 1 : 0;

        for (k = 1; k <= j; k++)
        {
            printf("%d ", i);
            i = (i + 1) % 2;
        }

        putchar('\n');
    }
}