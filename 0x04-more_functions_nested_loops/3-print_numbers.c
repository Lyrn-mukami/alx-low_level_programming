#include "main.h"

/**
 * print_numbers - used to print the ibers 0 - 9
 * @void: no input variable
 * 
 * Return: non expected
 **/
void print_numbers(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	
	_putchar('\n');
}
