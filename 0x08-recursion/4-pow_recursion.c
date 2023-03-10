#include "main.h"
/*
 * _pow_recursion - Returns the value of x raised to the power y
 *
 * @x  - is the base value
 * @y - is the power
 *
 * Return: x raised to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y==0)
	{
		return (1);
	}
	else
	{
		int res = _pow_recursion(x, (y-1) /2);
		return (x * res * res);
	}
}
