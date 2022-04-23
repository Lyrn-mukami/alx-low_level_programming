#include <stdio.h>
#include "main.h"
/**
 * print_array - used to print an array upto a point
 * @a: used to point to the array
 * @n: used to refer to the poit to which to print array
 *
 * Return: non expected
 */

void print_array(int *a, int n)
{
	int size = *(&a + 1) - a;

	for (size = 0; size < n; size++)
	{
		if (size == (n - 1))
			printf("%d", a[size]);
		else if (size < n)
			printf("%d, ", a[size]);
		else if (size == 1)
			printf("%d,", a[size]);
	}
	putchar('\n');
}
