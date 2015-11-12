// Program to determine the difference between two times

#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

int main (void)
{
    struct time getTime();
    struct time elapsed_time (struct time time1, struct time time2);
    
    struct time time1 = getTime();
    struct time time2 = getTime();
    
    struct time elapsed = elapsed_time(time1, time2);
    
    printf ("Elapsed Time: %.2i:%.2i:%.2i\n", elapsed.hours, elapsed.minutes, elapsed.seconds);
    
    return 0;
}

struct time getTime()
{
    struct time timeInput;
    
    printf ("Enter time with following format 00:00:00: ");
    scanf ("%i:%i:%i", &timeInput.hours, &timeInput.minutes, &timeInput.seconds);
    
    return timeInput;
}

struct time elapsed_time (struct time time1, struct time time2)
{
    struct time elapsed;
    
    if (time2.hours < time1.hours)
        elapsed.hours = time2.hours + 24 - time1.hours;
    else
        elapsed.hours = time2.hours - time1.hours;
    
    if (time2.minutes < time1.minutes) {
        elapsed.minutes = time2.minutes + 60 - time1.minutes;
        elapsed.hours -= 1;
    }
    else
        elapsed.minutes = time2.minutes - time1.minutes;
    
    if (time2.seconds < time1.seconds) {
        elapsed.seconds = time2.seconds + 60 - time1.seconds;
        elapsed.minutes -= 1;
    }
    else
        elapsed.seconds = time2.seconds - time1.seconds;
            
    return elapsed;
}