#include <stdio.h>
#include <unistd.h>
/**
 * main - prints the lowercase and uppercase alphabet
 *
 * Description: prints the alphabet in lowercase
 * and then in uppercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ch;
	int c;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}

