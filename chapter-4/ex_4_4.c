// Convert degrees C to F

#include <stdio.h>

int main (void)
{
    int     F = 27;
    float   C;
    
    C = (F - 32) / 1.8;
    
    printf ("%i degrees F is %g degrees C.\n", F, C);
    
    return 0;
}