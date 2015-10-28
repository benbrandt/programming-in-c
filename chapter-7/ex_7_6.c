// Program to generate the first 15 Fibonacci numbers
#include <stdio.h>

int main (void)
{
    int fib1, fib2, fibCurrent, i;
    
    fib1 = 0;   // by definition
    fib2 = 1;   // ditto
    
    for (i = 2; i < 15; ++i) {
        fibCurrent = fib2 + fib1;
        printf ("%i\n", fibCurrent);
        fib1 = fib2;
        fib2 = fibCurrent;
    }
           
    return 0;
}
