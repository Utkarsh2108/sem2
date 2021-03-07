// Write a program that check whether the number is prime or not.

#include <stdio.h>

void isPrime()
{
    int i, half, number;

    printf("Enter The Number: ");
    scanf("%d", &number);

    half = number / 2;

    for (i = 2; i <= half; i++)
    {
        if (number % i == 0)
        {
            printf("\nThe Number %d Is Not Prime", number);
            return;
        }
    }

    printf("\nThe Number %d Is Prime", number);
}