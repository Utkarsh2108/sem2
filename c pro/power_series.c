// Write a program to evaluate the power series.
//           e^x = 1 + x + (x^2)/2! + (x^3)/3! + _ _ _ + (x^n)/n! , 0 < x < 1
// The series contains the recurrence relationship of the type,
//           Tn = Tn-1 (x/n) for n > 1
//           T1 = x for n = 1
//           T0 = 1
// If Tn-1 is known then Tn can be easily found by multiplying the Tn-1 by x/n.
//           e^x = T0 + T1 + T2 + T3 + _ _ _ + Tn
// The program stops when the value of term Tn is less than ACCURACY(varible).

#include <stdio.h>

#define Accuracy 0.0001

void powerSeries()
{
    int n, count;
    float x, sum, term;

    printf("Enter The Value Of X: ");
    scanf("%f", &x);
    n = term = sum = count = 1;

    while (n <= 100)
    {
        term = term * x / n;
        sum = sum + term;
        count = count + 1;
        if (term < Accuracy)
        {
            n = 999;
        }
        else
        {
            n = n + 1;
        }
    }

    printf("Terms = %d Sum = %f\n", count, sum);
}