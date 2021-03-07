// Write a program that display the following pattern.
//     5 4 3 2 1
//       4 3 2 1
//         3 2 1
//           2 1
//             1

#include <stdio.h>

void printLadder()
{
    int i, j, n;

    printf("Enter The Number Of Lines: ");
    scanf("%d", &n);
    putchar('\n');

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }

        putchar('\n');
    }
}