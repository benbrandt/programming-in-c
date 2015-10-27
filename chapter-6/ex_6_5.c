// Program to reverse the digits of a number

#include <stdio.h>

int main (void)
{
    int number, right_digit;
    _Bool negative = 0;
    
    printf ("Enter your number.\n");
    scanf ("%i", &number);
    
    if (number < 0) {
        number = -number;
        negative = 1;
    }
    
    while (number != 0) {
        right_digit = number % 10;
        printf ("%i", right_digit);
        number = number / 10;
    }
    
    if (negative)
        printf ("-\n");
    else
        printf ("\n");
    
    return 0;
}
