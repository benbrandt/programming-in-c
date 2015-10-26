#include <stdio.h>

int main (void)
{
	int n, number, triangularNumber, numbersToEnter, counter;
	
	printf ("How many triangular numbers do you need? ");
	scanf ("%i", &numbersToEnter);
	
	for (counter = 1; counter <= numbersToEnter; ++counter) {
	    printf ("What triangular number do you want? ");
	    scanf  ("%i", &number);
	
	    triangularNumber = 0;
	
	    for (n = 1; n <= number; ++n)
	        triangularNumber += n;
	
	    printf ("Triangular number %i is %i\n", number, triangularNumber);
	}
				
	return 0;
}
