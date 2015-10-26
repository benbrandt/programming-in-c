// Program to generate a table of triangular numbers

#include <stdio.h>

int main (void)
{
	int n, triangularNumber;
	
	printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf (" n    Sum from 1 to n\n");
	printf ("---   ---------------\n");
	
	triangularNumber = 0;
	
	for (n = 5; n <= 50; n += 5) {
	    triangularNumber = n * (n + 1) / 2;
	    printf ("%2i           %i\n", n, triangularNumber);
	}
	    			
	return 0;
}
