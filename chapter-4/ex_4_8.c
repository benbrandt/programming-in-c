#include <stdio.h>

int main (void)
{
    int i, j;
    
    i = 365;
    j = 7;
    printf ("i + j - i %% j = %i\n", i + j - i % j);
    
    i = 12258;
    j = 23;
    printf ("i + j - i %% j = %i\n", i + j - i % j);
    
    i = 996;
    j = 4;
    printf ("i + j - i %% j = %i\n", i + j - i % j);
    
    return 0;
}