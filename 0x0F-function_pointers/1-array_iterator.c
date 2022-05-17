#include <stdio.h>
#include "main.h"
/**
 * array_iterator - iterates through array and prints elements
 * @array: array to be used
 * @size: size ofthe array
 * @action: function pointer
 *
 * Return: non expected
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
