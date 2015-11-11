// Program to determine the difference in days between two dates

#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

int main (void)
{
    struct date getDate();
    int N (struct date date);
    
    struct date date1 = getDate();
    struct date date2 = getDate();
    
    int n1 = N(date1);
    int n2 = N(date2);
    
    printf ("The difference between these dates is %i days.\n", n2 - n1);
    
    return 0;
}

struct date getDate()
{
    struct date dateInput;
    
    printf ("Enter date with following format mm/dd/yyyy: ");
    scanf ("%i/%i/%i", &dateInput.month, &dateInput.day, &dateInput.year);
    
    return dateInput;
}

int N (struct date dateInput)
{
    int f (int year, int month);
    int g (int month);
    int n;
    
    n = 1461 * f(dateInput.year, dateInput.month) / 4 + 153 * g(dateInput.month) / 5 + dateInput.day;
    
    if ((dateInput.year < 1900 && dateInput.year > 1800) ||
        (dateInput.year == 1900 && dateInput.month <=2) ||
        (dateInput.year == 1800 && dateInput.month > 2))
        n +=1;
    else if ((dateInput.year < 1800 && dateInput.year > 1700) ||
        (dateInput.year == 1800 && dateInput.month <=2) ||
        (dateInput.year == 1700 && dateInput.month > 2))
        n += 2;
    
    return n;
}

int f (int year, int month)
{
    if (month <= 2)
        return year - 1;
    else
        return year;
}

int g (int month)
{
    if (month <= 2)
        return month + 13;
    else
        return month + 1;
}