#include <stdio.h>

#define IS_UPPER_CASE(c)    (c >= 'A' && c <= 'Z') ? 1 : 0

int main (void)
{
    
    printf("%i\n", IS_UPPER_CASE('c'));
    printf("%i\n", IS_UPPER_CASE('C'));
}