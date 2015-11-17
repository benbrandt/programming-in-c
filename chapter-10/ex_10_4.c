#include <stdio.h>

int main (void)
{
    
    return 0;
}

void substring (const char source[], int start, int count, char result[])
{
    int i, j;
    
    for (i = start, j = 0; i <= count; ++i)
    {
        result[j] = source[i];
        j++;
    }
    
    
}