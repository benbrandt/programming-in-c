/* Function to find the least common multiple
        of two nonnegative integer values       */

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

int lcm (int u, int v)
{
    int n = 0;
    
    if (u >= 0 && v >= 0)
        n = u * v / gcd(u, v);
    
    return n;
}

int main (void)
{
    int result;
    
    printf ("The lcm of 15 and 10 is %i\n", lcm (15, 10));
    
    return 0;
}