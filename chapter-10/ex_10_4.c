#include <stdio.h>

int main (void)
{
    void substring (const char source[], int start, int count, char result[]);
    
    char result[80];
    
    substring("two words", 4, 20, result);
    
    printf ("%s\n", result);
    
    return 0;
}

void substring (const char source[], int start, int count, char result[])
{
    int i, j;
    
    for (i = start, j = 0; source[i] != '\0' && j <= count; ++i)
    {
        result[j] = source[i];
        j++;
    }
    
    result[j] = '\0';
}