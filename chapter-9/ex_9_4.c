// Program to determine print the day of the week for a given date

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
    void print_day_of_week (struct date dateInput);
    
    struct date date1 = getDate();
    
    print_day_of_week(date1);
    
    return 0;
}

struct date getDate()
{
    struct date dateInput;
    
    printf ("Enter date with following format mm/dd/yyyy: ");
    scanf ("%i/%i/%i", &dateInput.month, &dateInput.day, &dateInput.year);
    
    return dateInput;
}


void print_day_of_week (struct date dateInput)
{
    int N (struct date dateInput);
    int day;
    
    day = (N(dateInput) - 621049) % 7;
    
    switch (day)
    {
        case 0:
            printf ("The day of the week is: Sunday\n");
            break;
        case 1:
            printf ("The day of the week is: Monday\n");
            break;
        case 2:
            printf ("The day of the week is: Tuesday\n");
            break;
        case 3:
            printf ("The day of the week is: Wednesday\n");
            break;
        case 4:
            printf ("The day of the week is: Thursday\n");
            break;
        case 5:
            printf ("The day of the week is: Friday\n");
            break;
        case 6:
            printf ("The day of the week is: Saturday\n");
            break;
        default:
            printf ("We couldn't figure that one out. Please try again.\n");
    }
    
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
