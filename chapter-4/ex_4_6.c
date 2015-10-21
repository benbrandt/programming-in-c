#include <stdio.h>

int main (void)
{
    float x = 2.55, result;
    
    result = 3 * (x * x * x) - 5 * (x * x) + 6;
    
    printf ("3x^3 - 5x^2 + 6 = %g\n", result);
    
    return 0;
}