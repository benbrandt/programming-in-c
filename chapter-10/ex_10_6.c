#include <stdio.h>

int main (void)
{
    void removeString (char source[], int index, int len);
    char text[] = { "the wrong son" };
    
    removeString(text, 4, 6);
        
    printf ("%s\n", text);
    
    return 0;
}

void removeString (char source[], int index, int len)
{
    int i;
    
    for (i = index; source[i] != '\0'; i++)
    {
        source[i] = source[i + len];
    } 
    
    source[i] = '\0';
}