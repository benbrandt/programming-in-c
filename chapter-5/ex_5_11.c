#include <stdio.h>

int main (void)
{
    int number, sum;
    
    printf ("Enter your number.\n");
    scanf ("%i", &number);
    
    sum = 0;
    
    while (number != 0) {
        sum += number % 10;
        number = number / 10;
    }
    
    printf ("%i\n", sum);
    
    return 0;
}
