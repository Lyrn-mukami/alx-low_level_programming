#include <stdio.h>
#include "main.h"
/**
 * _puts - prints charachters
 * @c: variable used
 *
 * Return: characters
 **/
void _puts(char *s)
{
	int i;

	for (i = 0; *(s + i) != 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
