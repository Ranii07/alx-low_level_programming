#include "main.h"
/**
 * main - prints a string followed by new line 
 *
 * @*s - is a pointer
 *
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		putchar('\n');
		return 0;
	}
	putchar(*s);
	_puts_recusion(s+1);
}
