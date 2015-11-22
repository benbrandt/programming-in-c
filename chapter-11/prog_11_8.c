// Program to illustrate using pointers and functions

#include <stdio.h>

void test (int *int_pointer)
{
    *int_pointer = 100;
}

int main (void)
{
    void text (int *int_pointer);
    int i = 50, *p = &i;
    
    printf ("Before the call to test i = %i\n", i);
    
    test (p);
    printf ("After the call to test i = %i\n", i);
    
    return 0;
}