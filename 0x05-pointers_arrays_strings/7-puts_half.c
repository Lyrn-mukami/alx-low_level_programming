#include <stdio.h>
#include "main.h"
/**
 * puts_half - used to print the last half of a string
 * @str: pointer used
 *
 * Return: non expected
 */
void puts_half(char *str)
{
	int count = 0;
	int i = 0;
	int half = 0;

	while (str[i++])
	{
		count++;
	}
	if (count % 2 == 1)
	{
		half = (count + 1) / 2;

		for (i = half; i < count; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		half = count / 2;
		for (i = half; i < count; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
