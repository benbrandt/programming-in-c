// Program to generate a table of squared numbers

#include <stdio.h>

int main (void)
{
	int n, numberSquared;
	
	printf ("TABLE OF SQUARED NUMBERS\n\n");
	printf (" n     n^2\n");
	printf ("---   -----\n");
	
	numberSquared = 0;
	
	for (n = 1; n <= 10; ++n) {
	    numberSquared = n * n;
	    printf ("%2i     %i\n", n, numberSquared);
	}
	    			
	return 0;
}
