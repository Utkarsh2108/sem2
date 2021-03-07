// Write a program that check whether the string is palindrome or not.

#include <stdio.h>

int len(char *s)
{
    int length = 0;
    char *p;

    for (p = s; *p != '\0'; p++)
        length++;

    return length;
}

void isPalindrome(char *s)
{
    int length = len(s);
    for (int i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length - 1 - i])
        {
            printf("String is not palindrome \n");
            return;
        }
    }
    printf("String is palindrome \n");
}
