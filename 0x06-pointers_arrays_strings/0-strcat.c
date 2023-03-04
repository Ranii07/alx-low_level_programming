#include "main.h"
#include <string.h>
/**
 *
 * main - Write a function that concatenates two strings
 * @destination : destination array
 * @source : source array
 * 
 * Returns: 0 Always
*/

int main()
{
	char destination[] = "Hello  ";
	char source[] = "World!";
	strcat(destination,source);
	return (0);
}
