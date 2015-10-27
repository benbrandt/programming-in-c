// Program to reverse the digits of a number

#include <stdio.h>

int main (void)
{
    int number, digit, divisor;
    
    divisor = 1;
    
    printf ("Enter your number.\n");
    scanf ("%i", &number);
    
    // Check for zero
    if (number == 0)
        printf ("zero");
    
    // Check how many places the number is
    do {
        divisor *= 10;
    } 
    while ((number / divisor) > 1);
    
    // Roll back one
    divisor /= 10;
    
    // Print digits
    while (number != 0) {
        digit = number / divisor;
        
        if (digit == 0)
            printf ("zero ");
        else if (digit == 1)
            printf ("one ");
        else if (digit == 2)
            printf ("two ");
        else if (digit == 3)
            printf ("three ");
        else if (digit == 4)
            printf ("four ");
        else if (digit == 5)
            printf ("five ");
        else if (digit == 6)
            printf ("siz ");
        else if (digit == 7)
            printf ("seven ");
        else if (digit == 8)
            printf ("eight ");
        else if (digit == 9)
            printf ("nine ");
        else {
            printf ("Not a number");
            break;
        }
        
        number -= divisor * digit;
        divisor /= 10;
    }
    
    printf ("\n");
    
    return 0;
}
