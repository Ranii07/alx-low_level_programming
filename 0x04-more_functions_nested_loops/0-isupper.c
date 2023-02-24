#include "main.h"

/**
 * main -  checks for uppercase character.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
    char c;

    if (c>=65 && c<=90)
    {
	    return (1);
    }
    return 0;
}
