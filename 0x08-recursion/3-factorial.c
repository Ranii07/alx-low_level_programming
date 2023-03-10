#include "main.h"
/*
 * factorial - returns the factorial of n 
 *
 * @n - n is a given number
 *
 * Return: factorial of n
 *
 */
int factorial(int n)
{
	int n;
	if (n == 0)
	{
		return(1);
	}
	return (n * factorial(n - 1));
}
