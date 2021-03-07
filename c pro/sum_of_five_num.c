// Write a program that requests user to enter 5 numbers and print sum of
// that numbers.

#include <stdio.h>

void sumOfFive()
{
    int i;
    float sum, number;
    for (i = 0, sum = 0; i < 5; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%f", &number);
        sum = sum + number;
    }
    printf("The Sum Is %.2f", sum);
}