// Write a program that give review on grade given by user.

#include <stdio.h>

void giveReview()
{
    char grade;
    printf("Enter Your Grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case ('A'):
    {
        printf("Excellent!\n");
        break;
    }
    case ('B'):
    {
        printf("Keep It Up!\n\n");
        break;
    }
    case ('C'):
    {
        printf("Well Done!\n\n");
        break;
    }
    case ('D'):
    {
        printf("You Passed\n");
        break;
    }
    case ('F'):
    {
        printf("Better Luck Next Time\n");
        break;
    }
    default:
    {
        printf("Invalid Grade\n");
        break;
    }
    }

    printf("Your Grade Is %c\n", grade);
}