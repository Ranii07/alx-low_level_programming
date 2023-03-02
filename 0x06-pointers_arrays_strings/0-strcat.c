#include "main.h"
#include <string.h>
/**
 *
 * char *_strat() - Write a function that concatenates two strings
 * @destination : destination array
 * @source : source array
 * 
 * Returns 0 Always
*/

int main()
{
	char destination[15] = "Hello";
	char source[6] = "World!";
	strcat(destination,source);
	return (0);
}
