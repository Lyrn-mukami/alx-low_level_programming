#include "main.h"

/**
 * largest_number - used to compare numbers and print the largest
 * @a: first number
 * @b: second number
 * @c: third number
(*
 * Description: compare numbers)?
 * Return: largest number
 **/
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b)
	{
		if (a >= c)
		{
			largest = a;
		}

	}

	else if (b >= c)
	{
		largest = b;
	}

	else
	{
		largest = c;
	}

	return (largest);
}
