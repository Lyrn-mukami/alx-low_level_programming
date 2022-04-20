#include "main.h"
/**
 * swap_int - used to change the value of int using pointer
 * @a: pointer variable
 * @b: pointer variable
 *
 * Return: non expected
 */

void swap_int(int *a, int *b)
{
	double temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
