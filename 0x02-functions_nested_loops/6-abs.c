#include <stdio.h>

/**
 * _abs - used to print numbers after the number has been checked
 * ignores sign
 * @n: param passed
(*
 * Description:Used to check signs of numbers)?
 * Return: Always 0
 **/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
	{
		return (n);

	}
}
