#include <stdio.h>

#define ABSOLUTE_VALUE(x)   ( (x) > 0 ) ? (x) : -(x)

int main (void)
{
    
    printf("%i\n", ABSOLUTE_VALUE(1 + 3));
    printf("%i\n", ABSOLUTE_VALUE(1 - 3));
}