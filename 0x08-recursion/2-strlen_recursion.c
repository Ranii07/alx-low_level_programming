#include "main.h"
/**
 *
 *  int_strlen_recursion - returns length of string 
 *
 *  @s - is a string 
 *
 *  Return: length
 *
 */
int _strlen_recursion(char *s)
{
	int len = 0;
	while(*s != '\0')
	{
		len++;
		s++;
	}
	return len; 
}
