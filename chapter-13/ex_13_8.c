#include <stdio.h>

#define IS_LOWER_CASE(x)    ( ((x) >= 'a') && ((x) <= 'z') )
#define IS_UPPER_CASE(x)    ( ((x) >= 'A') && ((x) <= 'Z') )
#define IS_ALPHABETIC(x)    ( IS_LOWER_CASE(x) || IS_UPPER_CASE(x) )

#define IS_DIGIT(x)         ( ((x) >= '0') && ((x) <= '9') )
#define IS_SPECIAL(x)       ( !IS_DIGIT(x) && !IS_ALPHABETIC(x) )

int main (void)
{
    
    printf("%i\n", IS_DIGIT('c'));
    printf("%i\n", IS_DIGIT('1'));
    printf("%i\n", IS_SPECIAL('c'));
    printf("%i\n", IS_SPECIAL('&'));
}