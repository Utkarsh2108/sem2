// Write a program that reads a value in the range of 1 to 12 and print
// the month and next month corresponding to the value. Print error for
// any other value.

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void printMonthName()
{
    int i;
    char month[12][20] =
        {"January", "February", "March", "April",
         "May", "June", "July", "August", "September",
         "October", "November", "December"};

    printf("Enter Month Value: ");
    scanf("%d", &i);

    if (i < 1 || i > 12)
    {
        printf("Incorrect Value!!\nPress Any Key To Terminate The Program");
        getch();
        exit(0);
    }
    if (i != 12)
    {
        printf("%s Followed By %s", month[i - 1], month[i]);
    }
    else
    {
        printf("%s Followed By %s", month[i - 1], month[0]);
    }

    getch();
}