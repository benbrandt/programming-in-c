// Program to print the number of days in a month

#include <stdio.h>

int main (void)
{
    float     f = 1.00;
    short int i = 100;
    long int  l = 500L;
    double    d = 15.00;
    
    printf ("%f\n", f + i);                 // 101.00
    printf ("%f\n", l / d);                 // 33.3333
    printf ("%f\n", i / l + f);             // 1.00
    printf ("%li\n", l * i);                // 50000 
    printf ("%f\n", f / 2);                 // 0.50
    printf ("%f\n", i / (d + f));           // 6.25
    printf ("%f\n", l / (i * 2.0));         // 2.5
    printf ("%f\n", l + i / (double) l);    // 500.2
        
    return 0;
}