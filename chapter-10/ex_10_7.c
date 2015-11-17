#include <stdio.h>

int main (void)
{
    void insertString (char source[], char insert[], int index);
    char text[80] = { "the wrong son" };
    
    insertString(text, "per", 10);
        
    printf ("%s\n", text);
    
    return 0;
}

void insertString (char source[], char insert[], int index)
{
    int stringLength (const char string[]);
    int i, sourceLen, insertLen;
    
    sourceLen = stringLength(source);
    insertLen = stringLength(insert);
    
    for (i = sourceLen; i >= index; --i)
        source[i + insertLen] = source[i];
    
    for (i = 0; i < insertLen; ++i)
        source[i + index] = insert[i];
}

int stringLength (const char string[])
{
    int count = 0;
    
    while (string[count] != '\0')
        ++count;
    
    return count;
}