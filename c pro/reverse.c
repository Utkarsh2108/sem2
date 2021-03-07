// Write a program that reads a character from keyboard and then print it in
// reverse case. If the input is upper case, the output will be lower case
// and vice versa.

#include <ctype.h>
#include <stdio.h>

void reverseCase()
{
    char alphabet;
    printf("Enter An Alphabet");
    putchar('\n');

    alphabet = getchar();
    if (islower(alphabet))
    {
        putchar(toupper(alphabet));
    }
    else
    {
        putchar(tolower(alphabet));
    }
}