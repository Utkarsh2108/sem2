// Write a program prints fibonnaci series upto the number of terms given
// by user.

#include <stdio.h>

void printFibo()
{
    int i, number;
    int n1 = 0, n2 = 1, n3 = 0;

    printf("Enter The Number Of Elements: ");
    scanf("%d", &number);
    printf("\n%d %d", n1, n2);

    for (i = 2; i < number; ++i)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf(" %d", n3);
    }
}