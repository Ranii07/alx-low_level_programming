#include <stdio.h>

/**
 * Main - Entry point
 *
 * Description : prints all single digit
 * numbers
 *
 * Returns: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0 ; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');

	return (0);
}
