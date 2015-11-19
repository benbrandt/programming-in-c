// Function to convert a string to an integer

#include <stdio.h>

float strToFloat (const char string[])
{
    int i, intValue, index = 0, decimal = 0;
    float result = 0.0;
    
    if (string[0] == '-')
        index = 1;
    
    for (i = index; (string[i] >= '0' && string[i] <= '9') || string[i] == '.'; i++)
    {
        if (string[i] == '.')
            decimal = 1;
        else
        {   
            intValue = string[i] - '0';
            result = result * 10 + intValue;
            
            if (decimal > 0)
                decimal++;
        }
    }
    
    for (i = decimal - 1; i > 0; i--)
        result /= 10;
       
    if (index == 1)
        return -result;
    
    return result;
}

int main (void)
{
    float strToFloat (const char string[]);
    
    printf ("%g\n", strToFloat("245.2"));
    printf ("%g\n", strToFloat("-100.57477"));
    printf ("%g\n", strToFloat("-13x5"));
    
    return 0;
}