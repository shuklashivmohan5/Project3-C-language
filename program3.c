// Q.3 Digit Addition
// Develop a Program to find the sum of a number's first and last digits.

#include <stdio.h>

int main()
{
    int number, firstdigit, lastdigit;

    printf("Enter any number:- ");
    scanf("%d", &number);

    lastdigit = number % 10;

    while (number > 0)
    {
        firstdigit = number;
        number = number / 10;
    }

    printf("The sum of the first and the last digit:- %d", (firstdigit + lastdigit));

    return 0;
}