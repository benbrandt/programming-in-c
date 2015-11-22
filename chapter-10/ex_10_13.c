// Function to convert lowercase character to uppercase

#include <stdio.h>

void uppercase (char string[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
            string[i] += ('A' - 'a');
    }
}

int main (void)
{
    void uppercase (char string[]);
    
    char string[] = { "heLlO" };
    
    uppercase(string);
    
    printf ("%s\n", string);
    
    return 0;
}