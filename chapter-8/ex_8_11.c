// Program to return the sum of an array
#include <stdio.h>

int arraySum (int a[], int n)
{
    int i;
    int sum = 0;
    
    for (i = 0; i < n; i++) {
        sum += a[i];
    }
    
    return sum;
}

int main (void)
{
    int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                      44, -3, -9, 12, 17, 22, 6, 11 };
    int arraySum (int a[], int n);
    
    printf ("%i\n", arraySum(array, 16));
    
    return 0;
}