// Write a program that selects and prints largest of three numbers.

#include <stdio.h>

void largestNumber()
{
    int A, B, C;

    printf("Enter Three Numbers\n");
    scanf("%d %d %d", &A, &B, &C);
    printf("\nLargest value Is: ");

    if (A > B)
    {
        if (A > C)
        {
            printf("%d\n", A);
        }
        else
        {
            printf("%d\n", C);
        }
    }
    else if (C > B)
    {
        printf("%d\n", C);
    }
    else
    {
        printf("%d\n", B);
    }
}