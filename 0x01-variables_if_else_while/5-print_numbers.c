#include <stdio.h>
/**
 * main - prints all single digit numbers
 *
 * Description: prints all single digit numbers of base
 * 10 starting from 0
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	while (n >= 0 && n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
