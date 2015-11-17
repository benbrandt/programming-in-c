#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int findString (const char search[], const char find[]);
    
    int index = findString("a chatterbox", "hat");
        
    printf ("%i\n", index);
    
    return 0;
}

int findString (const char search[], const char find[])
{
    int     i, j;
    bool    found = false;
    
    for (i = 0; search[i] != '\0' && !found; ++i)
    {
        found = true;
        
        for (j = 0; find[j] != '\0' && found; ++j)
            if (search[j + i] != find[j] || search[j + i] == '\0')
                found = false;
        
        if (found)
            return i;
    }
       
    return -1;
}