#include "main.h"

/**
 * -puts_recursion - prints a string followed by new line 
 *
 * @*s - is a pointer
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recusion(s + 1);
}
