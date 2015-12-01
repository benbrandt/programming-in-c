#include <stdio.h>

struct entry
{
    int value;
    struct entry *prev;
    struct entry *next;
};

int main (void)
{
    struct entry n1, n2, n3;
    struct entry *listPtr = &n1;
    
    n1.value = 100;
    n1.prev = 0;
    n1.next = &n2;
    
    n2.value = 200;
    n2.prev = &n1;
    n2.next = &n3;
    
    n3.value = 300;
    n3.prev = &n2;
    n3.next = 0;
    
    while (listPtr != 0)
    {
        printf("%i\n", listPtr->value);
        listPtr = listPtr->next;
    }
    
    return 0;
}