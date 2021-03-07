// Write a program that prints the average of numbers given by user.

#include<stdio.h>

void average()
{
    int i, n;
    float x, sum = 0;

    printf("Enter The Number Of Elements: ");
    scanf("%d", &n);
    printf("\n\n\nEnter %d elements\n\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%f", &x);
        sum += x;
    }

    printf("\n\n\nThe Average Of The Entered Numbers Is = %f", (sum / n));
}
