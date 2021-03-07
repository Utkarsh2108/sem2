// Write a program that requests user to enter a character and print
// whether the character is vowel or not.

#include <stdio.h>

void isVowel()
{
    char ch;

    printf("Input A Character: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("\n\n%c Is A Vowel\n\n", ch);
        break;
    default:
        printf("%c Is Not A Vowel\n\n", ch);
    }

    printf("\n\n\t\tCoding Is Fun!\n\n\n");
}