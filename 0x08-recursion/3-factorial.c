#include "main.h"
/*
 * factorial - Returns the factorial of a given number
 *
 * @n - n is a given number to find factorial of
 *
 * Return: if n > 0 - return factorial of n
 * 	   if n < 0 - return -1 to indicate error
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
