#include "main.h"
/**
 * _strlen - used to print the length of a string
 * @s: pointer to point to string memory
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
