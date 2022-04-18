#include "main.h"

/**
 * print_numbers - used to print the numbers 0 - 9
 * @void: no input variable
 * 
 * Return: non expected
 **/
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num ++)
	{
		_putchar(num, '0');
	}
	_putchar('\n');
}
