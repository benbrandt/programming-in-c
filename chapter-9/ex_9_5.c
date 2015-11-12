// Program to update the time by one second

#include <stdio.h>
#include <stdbool.h>

struct date
{
    int month;
    int day;
    int year;
};

struct time
{
    int hour;
    int minutes;
    int seconds;
};

struct dateAndTime 
{
    struct date sdate;
    struct time stime; 
};


int main (void)
{
    struct dateAndTime timeUpdate (struct dateAndTime now);
    struct dateAndTime currentTime, nextTime;
    
    printf ("Enter the date (mm/dd/yyyy): ");
    scanf ("%i/%i/%i", &currentTime.sdate.month,
            &currentTime.sdate.day, &currentTime.sdate.year);
            
    printf ("Enter the time (hh:mm:ss): ");
    scanf ("%i:%i:%i", &currentTime.stime.hour,
            &currentTime.stime.minutes, &currentTime.stime.seconds);
            
    nextTime = timeUpdate (currentTime);
    
    printf ("Updated time is %.2i/%.2i/%.4i %.2i:%.2i:%.2i\n", nextTime.sdate.month,
            nextTime.sdate.day, nextTime.sdate.year, nextTime.stime.hour,
            nextTime.stime.minutes, nextTime.stime.seconds);
                
    return 0;
}

// Function to update the time by one second

struct dateAndTime timeUpdate (struct dateAndTime now)
{
    struct dateAndTime dateUpdate (struct dateAndTime today);
    
    ++now.stime.seconds;
    
    if (now.stime.seconds == 60) {        // next minute
        now.stime.seconds = 0;
        ++now.stime.minutes;
        
        if (now.stime.minutes == 60) {    // next hour
            now.stime.minutes = 0;
            ++now.stime.hour;
            
            if (now.stime.hour == 24) {     // midnight
                now.stime.hour = 0;
                now = dateUpdate(now);
            }
        }
    }
    
    return now;
}

// Function to calculate tomorrow's date

struct dateAndTime dateUpdate (struct dateAndTime today)
{    
    int numberOfDays (struct date d);   
                                   
    if (today.sdate.day != numberOfDays (today.sdate)) {
        today.sdate.day += 1;
    }
    else if (today.sdate.month == 12) {       // end of year
        today.sdate.day = 1;
        today.sdate.month = 1;
        today.sdate.year += 1;
    }
    else {                              // end of month
        today.sdate.day = 1;
        today.sdate.month += 1;
    }
    
    return today;
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