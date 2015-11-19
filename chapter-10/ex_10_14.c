// Function to convert an integer to a string

#include <stdio.h>

void intToStr (int n)
{
    int i, temp, index = 0;
    char charValue, result[80];
    
    if (n < 0)
    {
        result[0] = '-';
        n *= -1;
        index = 1;   
    }
    
    temp = n;
    
    while (temp > 0)
    {
        temp /= 10;
        index ++;
    }
    
    result[index] = '\0';
    
    index--;
    
    while (n > 0)
    {
        result[index] = (n % 10) + '0';
        n /= 10;
        index--;
    }
    
    printf ("%s\n", result);
}

int main (void)
{
    void intToStr (int n);
    
    intToStr(245);
    intToStr(-245);
    
    return 0;
}