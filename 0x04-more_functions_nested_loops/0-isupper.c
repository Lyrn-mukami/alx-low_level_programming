#include "main.h"

/**
 * _isupper - is used to check if input is an uppercase letter
 * @c: variable used
 *
 * Return: 0 or 1 dependent on input
 **/

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
