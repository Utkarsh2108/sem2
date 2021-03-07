// Write a program to displays a questions of YES/NO type to the user and
// reads the user's response in a single character(Y or N). If the response
// is Y or y, it outputs the message
//                       MY name is BUSY BEE
// otherwise, outputs
//                       You are good for nothing

#include <stdio.h>

void displayYesOrNo()
{
    char answer;

    printf("Would You Like To Know My Name?\n");
    printf("Type Y For Yes And N For No\n");

    answer = getchar();
    if (answer == 'y' || answer == 'Y')
    {
        printf("My Name Is Busy Bee");
    }
    else
        printf("You Are Good For Nothing");
}