#include "main.h"

/**
 * print_last_digit - used to print the last digit of a number
 * @n: param passed
(*
 * Description:print last digit of a number)?
 * Return: Always 0
 **/
int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (x < 0)
		x = x * -1;
	_putchar(x + '0');
	return (x);
}
