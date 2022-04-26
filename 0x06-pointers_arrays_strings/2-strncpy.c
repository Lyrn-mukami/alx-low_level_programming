#include <string.h>
#include "main.h"
/**
 * *_strncpy - copies a string to a prticular point
 * @dest: destination array
 * @src: source array
 * @n: copy to point n
 *
 * Return: char dest
 **/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
