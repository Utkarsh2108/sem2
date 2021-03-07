// Write a program that requests the user to enter a character and display
// whether the character is an alphabet or digit, or any other special
// character.

#include<ctype.h>
#include<stdio.h>

void isAlphanumberic()
{
    char character;
    printf("Press Any Key\n");

    character = getchar();
    if (isalpha(character) > 0)
    {
        printf("The Character Is An Alphabet");
    }
    else if (isdigit(character) > 0)
    {
        printf("The Character Is A Number");
    }
    else
    {
        printf("The Character Is Not Alphanumeric");
    }
}