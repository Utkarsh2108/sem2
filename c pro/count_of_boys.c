// Write a program that requests user to enter weight and height of 10 boys
// and print how many boys have weight < 50kg and height > 170 cm.

#include <stdio.h>

void countBoys()
{
    int i, count = 0;
    float weight, height;

    printf("Enter The Weight And Height Of 10 Boys\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%f %f", &weight, &height);
        if (weight < 50 && height > 170)
        {
            count = count + 1;
        }
    }

    printf("The Number Of Boys With Weight < 50Kg\n");
    printf("And Height > 170Cm = %d", count);
}