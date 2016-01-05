#include <stdio.h>
#include <stdlib.h>

struct date {
    int month;
    int day;
    int year;
};

struct date foo (struct date x)
{
    ++x.day;
    
    return x;
}

int main (void)
{
    struct date today = {10, 11, 2004};
    int         array[5] = {1, 2, 3, 4, 5};
    struct date *newDate, foo();
    char        *string = "text string";
    int         i = 3;
    
    newDate = (struct date *) malloc (sizeof (struct date));
    newDate->month = 11;
    newDate->day = 15;
    newDate->year = 2004;
    
    today = foo (today);
    
    free (newdate);
    
    return 0;
}