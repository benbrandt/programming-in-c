#include <stdio.h>

int main (void)
{
    float result = (3.31E-8 * 2.01E-7) / (7.16E-6 + 2.01E-8);
    
    printf ("(3.31E-8 * 2.01E-7) / (7.16E-6 + 2.01E-8) equals %g\n", result);
    
    return 0;
}