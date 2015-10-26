// Program to generate a table of factorial numbers

#include <stdio.h>

int main (void)
{
	int n, f, factorial;
	
	printf ("TABLE OF FACTORIAL NUMBERS\n\n");
	printf (" n    Product of 1 to n\n");
	printf ("---   -----------------\n");
	
	for (n = 1; n <= 10; n++) {
	    factorial = 1;
	
	    for (f = n; f >= 1; f--) {
	        factorial *= f;
	    }
	    printf ("%2i           %i\n", n, factorial);
	}
	    			
	return 0;
}
