// Program to illustrate structure pointers

#include <stdio.h>
#include <stdbool.h>

struct date
{
    int month;
    int day;
    int year;
};

int main (void)
{
    void dateUpdate (struct date *today);
    struct date today, *datePtr;
    
    printf ("Enter today's date (mm dd yyyy): ");
    scanf ("%i%i%i", &today.month, &today.day, &today.year);           
    
    dateUpdate (&today);
    
    printf ("Tomorrow's date is %i/%i/%.2i.\n", today.month,
            today.day, today.year % 100);
    
    return 0;
}

// Function to calculate tomorrow's date

void dateUpdate (struct date *today)
{    
    int numberOfDays (struct date d);   
                                   
    if (today->day != numberOfDays (*today)) {
        today->day += 1;
    }
    else if (today->month == 12) {       // end of year
        today->day = 1;
        today->month = 1;
        today->year += 1;
    }
    else {                              // end of month
        today->day = 1;
        today->month += 1;
    }
}

// Function to find the number of days in a month

int numberOfDays (struct date d)
{
    int         days;
    bool        isLeapYear (struct date d);
    const int   daysPerMonth[12] = { 31, 28, 31, 30, 31, 30,
                                     31, 31, 30, 31, 30, 31 };
    
    if (isLeapYear (d) == true && d.month == 2)
        days = 29;
    else
        days = daysPerMonth[d.month - 1];
    
    return days;
}

// Function to determine if it's a leap year

bool isLeapYear (struct date d)
{
    bool leapYearFlag;
    
    if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
        leapYearFlag = true;    // It's a leap year
    else
        leapYearFlag = false;   // Not a leap year
    
    return leapYearFlag;
}