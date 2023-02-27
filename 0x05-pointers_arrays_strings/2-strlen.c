#include "main.h"
#include <stdio.h>
/**
 * 2-strlen - returns the length of a string.
 * @s:string 
 * @len: length of string
 * Return; 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
