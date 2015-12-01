#include <stdio.h>

struct entry
{
    int value;
    struct entry *prev;
    struct entry *next;
};

int main (void)
{
    void insertEntry (struct entry *entryPtr, struct entry *afterPtr);
    void removeEntry (struct entry *entryPtr);
    struct entry n1, n2, n3, n4;
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
    
    n4.value = 400;
    insertEntry (&n4, &n2);
    
    while (listPtr != 0)
    {
        printf("%i\n", listPtr->value);
        listPtr = listPtr->next;
    }
    
    printf("\n");
    removeEntry (&n4);
    listPtr = &n1;
    
    while (listPtr != 0)
    {
        printf("%i\n", listPtr->value);
        listPtr = listPtr->next;
    }
    
    return 0;
}

void insertEntry (struct entry *entryPtr, struct entry *afterPtr)
{
    struct entry *nextPtr;
    nextPtr = afterPtr->next;
   
    afterPtr->next = entryPtr;
    entryPtr->prev = afterPtr;
    entryPtr->next = nextPtr;
    nextPtr->prev = entryPtr;
}

void removeEntry (struct entry *entryPtr)
{
    struct entry *prevPtr, *nextPtr;
    prevPtr = entryPtr->prev;
    nextPtr = entryPtr->next;
   
    prevPtr->next = nextPtr;
    nextPtr->prev = prevPtr;
}