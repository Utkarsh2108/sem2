// Write a program that take input as name of the month from the user and
// display the corresponding number of days in that month.(Using Switch case)

#include<stdio.h>
#include<ctype.h>
#include<string.h>

/*
 * Function: convertToLowerCase
 * ----------------------------
 *   Converts a string to lowercase letters
 *
 *   s: string 
 *   
 *   returns: The new string converted to lower case
 */

void convertToLowerCase(char *s)
{
    // We don't know the length of input string so we
    // can't use the condition like i < length in for
    // loop so we have to iterate through pointer and
    // string contains '\0' at the end so we will
    // terminate the loop when we'll reach there.

    char *p;

    // iterate and convert every letter to lowercase
    for (p = s; *p != '\0'; p++)
    {
        // p is the memory adress. if we want to access the
        // value at that adress we have to dereference the
        // pointer

        *p = tolower(*p);
    }
}

/*
 * Function: monthNumber
 * ----------------------------
 *   Returns month-number from month-name
 *
 *   month: name of the month 
 *   
 *   returns: month-number of 'month'
*/

int monthNumber(char *month)
{
    // Array of month names
    char monthNames[12][15] =
        {"january", "february", "march", "april",
         "may", "june", "july", "august", "september",
         "october", "november", "december"};

    // Compare every month name with the input of user
    for (int i = 0; i < 12; i++)
    {
        // strcmp() return 0 if two string are same
        // so !strcmp() return 1 in that case and
        // 'if statement' will be executed. we also
        // returning i+1 not i because array index
        // starts from 0 and month-number starts from 1

        if (!strcmp(month, monthNames[i]))
            return i + 1;
    }

    // User entered wrong month name
    return -1;
}

/*
 * Function: daysInMonth
 * ----------------------------
 *   Returns how many days particular month have
 *
 *   month: name of the month 
 *   
 *   returns: How many days 'month' have
 */

void daysInMonth(char month[])
{
    // Converting the input to lowercase because user may
    // enter the string in uppercase. We can use strlwr()
    // function from string.h instead of this one.
    convertToLowerCase(month);

    // Getting the month number from month name
    // example: january -> 1,  february -> 2, december -> 12 etc.
    int monthNum = monthNumber(month);

    switch (monthNum)
    {
    case 1:
        printf("31 days");
        break;
    case 2:
        printf("28/29 days");
        break;
    case 3:
        printf("31 days");
        break;
    case 4:
        printf("30 days");
        break;
    case 5:
        printf("31 days");
        break;
    case 6:
        printf("30 days");
        break;
    case 7:
        printf("31 days");
        break;
    case 8:
        printf("31 days");
        break;
    case 9:
        printf("30 days");
        break;
    case 10:
        printf("31 days");
        break;
    case 11:
        printf("30 days");
        break;
    case 12:
        printf("31 days");
        break;
    default:
        printf("Invalid input! Please enter the correct month name.");
    }
    putchar('\n');
}

int main(void)
{
    // Char array to store input from user
    char month[15];

    printf("Enter month name: ");
    scanf("%s", month);

    daysInMonth(month);
    return 0;
}