#include <stdio.h>
#include "main.h"
/**
 * main - prints _putchar
 *
 * Description: program prints _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char str[] = "_putchar\n";
int i = 0;

while (str[i] != '\0')
	{
	char c = str[i];

	_putchar(c);
	i++;
	}
return (0);
}
