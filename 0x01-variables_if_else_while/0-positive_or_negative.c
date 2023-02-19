#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -Entry point
 *
 * This program will assign a random number to the variable n when executed.
 *
 * Return: Always 0 (success)
*/

int main(void)

{	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{	
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{	
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{	
		printf("%d is zero\n", n);
	}
	return (0);
}
