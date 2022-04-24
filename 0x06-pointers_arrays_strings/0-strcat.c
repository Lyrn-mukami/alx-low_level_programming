#include <stdio.h>
#include "main.h"
/**
 * *_strcat - adds elements of src to dest
 * @dest: array to be inserted elements
 * @src: array to be concatenated
 *
 * Return: dest array
 **/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int k = 0;
	int j = 0;
	int sum = 0;

	while (dest[i++])
	{
		k++;
	}
	i = 0;

	while (src[i++])
	{
		j++;
	}
	sum = k + j;
	j = 0;

	for (i = k; i < sum;)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
