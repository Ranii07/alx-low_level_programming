#include <stdio.h>
#include <unistd.h>
/*
 * main - Entry point
 *
 * Description: This program prints the alphabet
 * in lowercase and then uppercase
 * , followed by a new line.
 *
 * Return: Always 0 (success)
 *
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
