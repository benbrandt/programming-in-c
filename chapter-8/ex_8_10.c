/* Function to find if input is prime       */

#include <stdio.h>

int gcd (int u, int v)
{
    int temp;
      
    while (v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }
    
    return u;
}

void prime (int n) {
    _Bool   isPrime = 1;
    int     i, temp;
    
    for (i = 1; i <=n; ++i) {
        temp = gcd (n, i);
            
        if (temp != 1 && temp != n) {
            isPrime = 0;
            break;
        }
    }
    
    printf ("%i\n",  isPrime);
}

int main (void)
{
    prime (10);
    prime (5);
    
    return 0;
}