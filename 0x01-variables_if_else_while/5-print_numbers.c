#include <stdio.h>
/*
 *
 * Main - entry point 
 *
 * Description : prints all single digit numbers
 * of base 10 starting from 0
 *
 */
int main(void)
{
	int n;

	while(n >=0 && n <= 9)
	{
		printf("%d", n);
		n++;
	}
	return (0);
}
