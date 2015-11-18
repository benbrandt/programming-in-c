#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    void replaceString (char source[], char find[], char replace[]);
    char text[20] = { "one" };
    
    replaceString(text, "one", "1");
        
    printf ("%s\n", text);
    
    return 0;
}

void replaceString (char source[], char find[], char replace[])
{
    int stringLength (const char string[]);
    int findString (const char search[], const char find[]);
    void removeString (char source[], int index, int len);
    void insertString (char source[], char insert[], int index);
    
    int index = findString(source, find);
    
    if (index != -1)
    {
        removeString(source, index, stringLength(find));
        insertString(source, replace, index);
    }
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

void removeString (char source[], int index, int len)
{
    int i;
    
    for (i = index; source[i] != '\0'; i++)
    {
        source[i] = source[i + len];
    } 
    
    source[i] = '\0';
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