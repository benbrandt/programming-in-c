// Program to evaluate simple expressions

#include <stdio.h>

int main (void)
{
    float   value1, accumulator;
    char    operator;
    
    printf ("Begin calculations.\n");
    
    while (operator != 'E') {
        scanf ("%f %c", &value1, &operator);
        
        if (operator == 'E') {
            break;
        }
        else if (operator == 'S') {
            accumulator = value1;
            printf ("%g\n", accumulator);
        }
        else if (operator == '+') {
            accumulator += value1;
            printf ("%g\n", accumulator);
        }
        else if (operator == '-') {
            accumulator -= value1;
            printf ("%g\n", accumulator);
        }
        else if (operator == '*') {
            accumulator *= value1;
            printf ("%g\n", accumulator);
        }
        else if (operator == '/') {
            if (value1 == 0) {
                printf ("Division by zero.\n");
            }
            else {
                accumulator /= value1;
                printf ("%g\n", accumulator);
            }
        }
        else {
            printf ("Unknown operator.\n");
        }
    }
    
    printf ("%g\n", accumulator);
    printf ("End of calculations.\n");

    return 0;
}
