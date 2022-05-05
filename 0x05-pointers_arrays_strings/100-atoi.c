#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _atoi - finds int in string and prints
 * @s: used to point to string
 *
 * Return: int to be printed
 **/
int _atoi(char *s)
{
	unsigned int res  = 0;
	int minus = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			minus *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			res = (res * 10) + (*s - 48);
		}
		else if (res > 0)
		{
			break;
		}
		s += 1;
	}
	return (res * minus);
}
