// Function to calculate the nth triangular number

#include <stdio.h>

int calculateTriangularNumber (int n)
{
    int i, triangularNumber = 0;
    
    for (i = 1; i <= n; ++i)
        triangularNumber += i;
    
    return triangularNumber;
}

int main (void)
{
	int number, counter;
    int calculateTriangularNumber (int n);
	
	for (counter = 1; counter <= 5; ++counter) {
	    printf ("What triangular number do you want? ");
	    scanf  ("%i", &number);
	
	    printf ("Triangular number %i is %i\n", number, calculateTriangularNumber(number));
	}
				
	return 0;
}
