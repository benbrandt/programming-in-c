// Function to convert a string to an integer

#include <stdio.h>

int strToInt (const char string[])
{
    int i, intValue, index = 0, result = 0;
    
    if (string[0] == '-')
        index = 1;
    
    for (i = index; string[i] >= '0' && string[i] <= '9'; i++)
    {
        intValue = string[i] - '0';
        result = result * 10 + intValue;
    }
    
    if (index == 1)
        return -result;
    
    return result;
}

int main (void)
{
    int strToInt (const char string[]);
    
    printf ("%i\n", strToInt("245"));
    printf ("%i\n", strToInt("-100") + 25);
    printf ("%i\n", strToInt("-13x5"));
    
    return 0;
}