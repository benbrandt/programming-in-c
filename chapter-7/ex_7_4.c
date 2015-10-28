#include <stdio.h>

int main (void)
{
    float numbers[10], sum;
    int   i;
    
    for (i = 0; i < 10; i++)
        numbers[i] = 0;
    
    printf ("Enter 10 Floating-point Values:\n");
    
    for (i = 0; i < 10; i++)
        scanf ("%f", &numbers[i]);
    
    for (i = 0; i < 10; i++) {
        sum += numbers[i];
    }
    
    printf ("The average value is: %f\n", sum / 10);
        
    return 0;
}
