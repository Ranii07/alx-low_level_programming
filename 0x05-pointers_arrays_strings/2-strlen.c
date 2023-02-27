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
	char *s;
	int len;
	
	s = "My first strlen!";
	len = _strlen(s);
       	printf("%d\n", len);
	return (0);
}
