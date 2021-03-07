// Write a program that selects and prints largest of two numbers.

#include <stdio.h>

void largestNumber()
{
    float number1, number2;

    printf("Enter Two Numbers: ");
    scanf("%f %f", &number1, &number2);

    if (number1 > number2)
    {
        printf("%.2f Is The Largest Number", number1);
    }
    if (number2 > number1)
    {
        printf("%.2f Is The Largest Number", number2);
    }
    else
    {
        printf("%.2f And %.2f Are Equal", number1, number2);
    }
}