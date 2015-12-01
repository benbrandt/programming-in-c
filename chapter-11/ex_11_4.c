#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

int main (void)
{
    void removeEntry (struct entry *entryPtr);
    struct entry n1, n2, n3, start;
    struct entry *listPtr = &start;
    
    start.value = 0;
    start.next = &n1;
    
    n1.value = 100;
    n1.next = &n2;
    
    n2.value = 200;
    n2.next = &n3;
    
    n3.value = 300;
    n3.next = 0;
    
    while (listPtr->next != 0)
    {
        listPtr = listPtr->next;
        printf("%i\n", listPtr->value);
    }
        
    removeEntry (&n2);
    
    listPtr = &start;    
    while (listPtr->next != 0)
    {
        listPtr = listPtr->next;
        printf("%i\n", listPtr->value);
    }
    
    return 0;
}

void removeEntry (struct entry *entryPtr)
{
    struct entry *removePtr;
    removePtr = entryPtr->next;
   
    entryPtr->next = removePtr->next;
}