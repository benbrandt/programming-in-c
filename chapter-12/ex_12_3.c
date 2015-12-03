#include <stdio.h>

int main (void)
{
    int int_size(void);
    
    printf ("%i\n", int_size());
    
    return 0;
}

int int_size(void)
{
    unsigned int base = ~0;
    int count = 0;
    
    while (base != 0)
    {
        base >>= 1;
        count++;
    }
    
    return count;
}
