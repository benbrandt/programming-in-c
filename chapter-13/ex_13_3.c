#include <stdio.h>

#define MIN(x,y)    ((x) < (y)) ? (x) : (y)

int main (void)
{
    printf("%i\n", MIN(3,2));
}