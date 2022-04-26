#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_strncat - adds elements of src to dest
 * @dest: array to be inserted elements
 * @src: array to be concatenated
 * @n:limit to concatenation
 *
 * Return: dest array
 **/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
