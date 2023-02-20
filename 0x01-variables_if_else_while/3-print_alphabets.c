#include <stdio.h>
#include <unistd.h>
/*
 * main - Entry point
 * This program prints the alphabet in lowercase and then uppercase
 *
 * Return: Always 0 (success)
 *
*/

int main (void)
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

