#include <stdio.h>

int main (void)
{
    int     i;
    char    line[81];
    void    readLine (char buffer[]);
    
    for (i = 0; i < 3; ++i)
    {
        readLine(line);
        printf ("%s\n\n", line);
    }
    
    return 0;
}

// Function to read a line of text from the terminal

void readLine (char *buffer)
{
    char    character;
    
    do
    {
        character = getchar();
        *buffer = character;
        ++buffer;
    }
    while (character != '\n');
    
    *buffer = '\0';
}