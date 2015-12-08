#include <stdio.h>

#define SHIFT(x, n)    (n > 1) ? (x <<= n) : (x >>= -n)

int main (void)
{
    unsigned int w1 = 0177777u;
    
    printf("%i\n", SHIFT(w1,5));
    printf("%i\n", SHIFT(w1,-5));
}