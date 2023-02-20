#include <stdio.h>

/*
 * Main - Entry point
 *
 * Description : prints numbers all single
 * digit numbers
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
