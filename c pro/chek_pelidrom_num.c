// Write a program that check whether the number is palindrome or not.

#include<conio.h>
#include<stdio.h>

void isPalindrome()
{
    int a, b, c;
    int s = 0;

    printf("Enter A Number: ");
    scanf("%d", &a);
    c = a;

    while (a > 0)
    {
        b = a % 10;
        s = (s * 10) + b;
        a = a / 10;
    }
    if (s == c)
    {
        printf("The Number %d Is A Palindrome", c);
    }
    else
    {
        printf("The Number %d Is Not A Palindrome", c);
    }

    getch();
}
