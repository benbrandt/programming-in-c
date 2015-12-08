#include <stdio.h>

#define IS_LOWER_CASE(x) ( ((x) >= 'a') && ((x) <= 'z') )
#define IS_UPPER_CASE(x) ( ((x) >= 'A') && ((x) <= 'Z') )
#define IS_ALPHABETIC(x) ( IS_LOWER_CASE(x) || IS_UPPER_CASE(x) )

int main (void)
{
    
    printf("%i\n", IS_ALPHABETIC('c'));
    printf("%i\n", IS_ALPHABETIC('1'));
}