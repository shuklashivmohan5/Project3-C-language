// Q.2 Digit Counter.
// Develop a Program to count the total number of digits in a number.

#include <stdio.h>

int main()
{
    int number, count = 0;

    printf("Enter any number:- ");
    scanf("%d", &number);

    if (number < 0)
    {
        number = -number;
    }
    do
    {
        count++;
        number /= 10;
    } while (number != 0);

    printf("Total number of digits:- %d", count);

    return 0;
}