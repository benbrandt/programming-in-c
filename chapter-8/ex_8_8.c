#include <stdio.h>

// Function to calculate the absolute value of a number
double absoluteValue (double x)
{
    if (x < 0)
        x = -x;
        
    return x;
}


// Function to compute the square root of a number

double squareRoot (double x, const double epsilon)
{
    double guess = 1.0;
    double absoluteValue (double x);
    
    while (absoluteValue ((guess * guess / x) - 1) >= epsilon) {
        guess = (x / guess + guess) / 2.0;
    }
        
    return guess;
}

// Function to solve the quadratic formula

void quadratic (int a, int b, int c)
{
    double squareRoot (double x, const double epsilon);
    
    if (b * b - 4 * a * c < 0)
        printf ("The roots are imaginary.");
    else {
        printf ("%g ", (-b + squareRoot ((b * b - 4 * a * c), 0.0001)) / (2 * a));
        printf ("%g\n", (-b - squareRoot ((b * b - 4 * a * c), 0.0001)) / (2 * a));
    }
}


int main (void)
{
    void quadratic (int a, int b, int c);
    
    printf ("The roots of %ix^2 + %ix + %i = 0 are: \n", 4, -17, -15);
    quadratic (4, -17, -15);
    
    return 0;
}