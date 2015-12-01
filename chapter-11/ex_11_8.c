#include <stdio.h>

int main (void)
{
    void sort3 (int *xp, int *yp, int *zp);
    
    int x = 3, y = 2, z = 1;
    
    printf("%i, %i, %i\n", x, y, z);
    
    sort3(&x, &y, &z);

    printf("%i, %i, %i\n", x, y, z);
    
    return 0;
}

void sort3 (int *xp, int *yp, int *zp)
{    
    int temp;
    
    if (*xp > *yp)
    {
        temp = *xp;
        *xp = *yp;
        *yp = temp;
    }
    if (*xp > *zp)
    {
        temp = *xp;
        *xp = *zp;
        *zp = temp;
    }
    if (*yp > *zp)
    {
        temp = *yp;
        *yp = *zp;
        *zp = temp;
    }   
}