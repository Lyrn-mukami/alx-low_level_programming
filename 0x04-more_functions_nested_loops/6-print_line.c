#include "main.h"
/**
 * print_line - used to print dashes till n
 * @n: argument used to measure length of line
 *
 * Return: no return
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
