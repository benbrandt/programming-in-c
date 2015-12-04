#include <stdio.h>

#define MAX(x,y)    ((x) > (y)) ? (x) : (y)
#define MAX3(x,y,z) MAX(MAX(x,y), z)

int main (void)
{
    printf("%i\n", MAX3(3,5,4));
}