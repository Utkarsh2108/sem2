// Write a program that give prints devision on marks given by user.

#include <stdio.h>

int printDevision()
{
    float percentage;

    printf("Enter The Percentage\n");
    scanf("%f", &percentage);

    if (percentage >= 80 && percentage < 100)
    {
        printf("First Division");
    }
    else if (percentage >= 60 && percentage < 80)
    {
        printf("Second Division");
    }
    else if (percentage >= 33 && percentage < 60)
    {
        printf("Third Division");
    }
    else if (percentage >= 0 && percentage < 33)
    {
        printf("Fail");
    }
    else
    {
        printf("Enter A Valid Percentage");
    }
}