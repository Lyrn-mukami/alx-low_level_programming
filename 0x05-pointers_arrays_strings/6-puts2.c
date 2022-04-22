#include <stdio.h>
#include "main.h"
/**
 * puts2 - used to print digits at multiple of 2 positions
 * @str: pointer used
 *
 * Return: non expected
 */
void puts2(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i++])
	{
		count++;
	}
	for (i = 0; i < count; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
