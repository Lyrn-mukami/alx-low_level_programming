#include "main.h"

/**
 * print_sign - used to print -, 0 + after the number has been checked
 * @n: param passed
(*
 * Description:Used to check signs of numbers)?
 * Return: Always 0
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);

	}
}
