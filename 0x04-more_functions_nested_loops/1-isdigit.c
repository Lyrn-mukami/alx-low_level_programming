#include "main.h"

/**
 * _isdigit - used to check for a number
 * @c: variable assigned to check
 *
 * Return: returns 1 when c is a digit and 0 if not
 **/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
