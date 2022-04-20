#include <stdio.h>
#include "main.h"
/**
 * _puts - used to print the length of a string
 * @str: pointer to point to string memory
 *
 * Return: length of string
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
