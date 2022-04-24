#include <stdio.h>
#include "main.h"
/**
 * *_strcpy - it copies a string into an array
 * @dest: array where data is inserted
 * @src: string to be copied
 *
 * Return: array dest
 **/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i++])
	{
		j++;
	}
	for (i = 0; i <= j;)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
