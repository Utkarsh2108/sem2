// Write a program to copy one string into another and count the number of
// characters copied.

#include <stdio.h>

char newString[80];

char *copyString(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        newString[i] = s[i];
    }

    // Putting zero character at the end of the char array
    // because we want to make that char array a string.
    newString[i] = '\0';

    printf("\n%s\n", newString);
    printf("Numbers of characters = %d\n", i);

    return newString;
}