#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

int main (void)
{
    void insertEntry (struct entry *entryPtr, struct entry *afterPtr);
    struct entry n1, n2, n3, n4;
    struct entry *listPtr = &n1;
    
    n1.value = 100;
    n1.next = &n2;
    
    n2.value = 200;
    n2.next = &n3;
    
    n3.value = 300;
    n3.next = 0;
    
    n4.value = 400;
    
    while (listPtr != (struct entry *) 0)
    {
        printf("%i\n", listPtr->value);
        listPtr = listPtr->next;
    }
        
    insertEntry (&n4, &n1);
    
    listPtr = &n1;    
    while (listPtr != (struct entry *) 0)
    {
        printf("%i\n", listPtr->value);
        listPtr = listPtr->next;
    }
    
    return 0;
}

void insertEntry (struct entry *entryPtr, struct entry *afterPtr)
{
    struct entry nextPtr;
    nextPtr.next = afterPtr->next;
   
    afterPtr->next = entryPtr;
    entryPtr->next = nextPtr.next;
}