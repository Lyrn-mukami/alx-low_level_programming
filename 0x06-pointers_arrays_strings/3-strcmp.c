#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: destination array
 * @s2: source array
 *
 * Return: char dest
 **/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int diff = 0;

	while (s1[i++] && s2[j++])
	{
		if (s1[i] != s2[j])
		{
			diff = s1[i] - s2[j];
			break;
		}
	}
	return (diff);
}
