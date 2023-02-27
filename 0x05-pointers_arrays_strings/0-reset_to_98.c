#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates the
 * value it points to to 98.
 *
 * Return: Always 0.
 *
 * 
*/
void reset_to_98(int *n)
{
	int n;

	n  = 402;

	int *n = &n;

	reset_to_98(&n);

	return (0);
}
