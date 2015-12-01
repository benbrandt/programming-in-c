// Program to sort an array of integers into ascending order

#include <stdio.h>

int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                  44, -3, -9, 12, 17, 22, 6, 11 };

void sort (int *a, int n, int order)
{
    int *i, *j, temp;
    
    for (i = a; i < a + n - 1; ++i)
        for (j = i + 1; j < a + n; ++j)
            if (order < 0) {
                if (*i < *j) {
                    temp = *i;
                    *i = *j;
                    *j = temp;
                }
            }
            else {
                if (*i > *j) {
                    temp = *i;
                    *i = *j;
                    *j = temp;
                } 
            }           
}

int main (void)
{
    int i;
    
    void sort (int *a, int n, int order);
    
    printf ("The array before the sort:\n");
    
    for (i = 0; i < 16; ++i)
        printf ("%i ", array[i]);
        
    sort (array, 16, -1);
    
    printf ("\n\nThe array after the sort:\n");
    
    for (i = 0; i < 16; ++i)
        printf ("%i ", array[i]);
        
    printf ("\n");
    
    printf ("The array before the sort:\n");
    
    for (i = 0; i < 16; ++i)
        printf ("%i ", array[i]);
        
    sort (array, 16, 1);
    
    printf ("\n\nThe array after the sort:\n");
    
    for (i = 0; i < 16; ++i)
        printf ("%i ", array[i]);
        
    printf ("\n");
    
    return 0;
}