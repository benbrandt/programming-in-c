// Program to return result of dividing first number by second

#include <stdio.h>

int main (void)
{
    int value1, value2;
    
    printf ("Type in two integers: ");
    scanf ("%i %i", &value1, &value2);
    
    if (value2 == 0)
        printf ("Division by zero.\n");
    else
        printf ("%.3f\n", (float) value1 / value2);

    return 0;
}
