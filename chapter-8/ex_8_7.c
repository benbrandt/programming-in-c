#include <stdio.h>

// Function to calculate x to the nth power

long int x_to_the_n (int x, int n)
{
    long int result = 1;
    
    if (n == 0)
        result = 1;
    else
        while (n > 0) {
            result *= x;
            n--;
        }
        
    return result;
}

int main (void)
{
    long int x_to_the_n (int x, int n);
    
    printf ("%i to the %i power = %li\n", 2, 4, x_to_the_n(2, 4));
    
    return 0;
}