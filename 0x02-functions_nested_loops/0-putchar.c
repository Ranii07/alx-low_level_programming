#include <stdio.h>
/**
 * main - prints _putchar
 *
 * Description: program prints _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
*/
int main()
{
	char str[] = "_putchar\n";
	long unsigned int i;
	for (i = 0; i < sizeof(str); i++)
	{
		putchar(str[i]);
	}

	return 0;
}
