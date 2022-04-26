#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * *_strcmp - copies a string to a prticular point
 * @s1: destination array
 * @s2: source array
 *
 * Return: char dest
 **/
int *_strcmp(char *s1, char *s2)
{
	return (strcmp(*s1, *s2));
}
