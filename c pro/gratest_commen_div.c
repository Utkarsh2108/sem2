// Write a program to determine the GCD of two numbers.

#include <math.h>
#include <conio.h>
#include <stdio.h>

int GCD(int a, int b)
{
    if (b > a)
    {
        return GCD(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    else
    {
        return GCD(b, a % b);
    }
}