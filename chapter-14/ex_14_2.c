// Program to print the number of days in a month

#include <stdio.h>


enum month  { january = 1, february, march, april, may, june,
              july, august, september, october, november, december };

int main (void)
{
    char * monthName (enum month aMonth);
    enum month  aMonth;
    int         days;
    
    printf ("Enter month number: ");
    scanf ("%i", &aMonth);
    
    printf ("%s\n", monthName(aMonth));
        
    return 0;
}

char * monthName (enum month aMonth)
{
    switch (aMonth) {
        case january:
            return "January";
            break;
        case february:
            return "February";
            break;
        case march:
            return "March";
            break;
        case april:
            return "April";
            break;
        case may:
            return "May";
            break;
        case june:
            return "June";
            break;
        case july:
            return "July";
            break;
        case august:
            return "August";
            break;
        case september:
            return "September";
            break;
        case october:
            return "October";
            break;
        case november:
            return "November";
            break;
        case december:
            return "December";
            break;
        default:
            return "bad month number";
            break;
    }
}