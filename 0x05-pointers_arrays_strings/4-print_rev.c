#include <stdio.h>
#include "main.h"
/**
 * print_rev - used to print a string in reverse
 * @s: pointer to point to string memory
 *
 * Return: length of string
 */
void print_rev(char *s)
{
	int count = 0;
	int i;
	int end;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	end = count - 1;

	for (i = end; i >= 0; i--)


	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
