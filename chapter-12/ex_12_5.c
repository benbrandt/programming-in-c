#include <stdio.h>

int main (void)
{
    int bit_test (unsigned int word, int n);
    unsigned int bit_set (unsigned int word, int n);
    
    printf ("%u\n", bit_test(56u, 5));
    printf ("%u\n", bit_set(56u, 5));
    
    return 0;
}

int bit_test (unsigned int word, int n)
{
    if (n < 0 || n > 31)
        return 0;
    
    if ((word >> (31 - n)) & 0x1)
        return 1;
    else
        return 0;
}

unsigned int bit_set (unsigned int word, int n)
{
    if (n < 0 || n > 31)
        return 0;
        
    return word | (1 << (31 - n));
}
