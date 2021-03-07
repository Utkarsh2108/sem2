// Write a program that prints the pyramid.

#include <stdio.h>

void printPyramid()
{
    int n;
    printf("Enter a number for generating the pyramid:");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
            printf("  ");
        for (int k = i; k >= 0; k--)
            printf("%d ", k);
        for (int p = 1; p <= i; p++)
            printf("%d ", p);
        putchar('\n');
    }
}
© 2021 GitHub, Inc.