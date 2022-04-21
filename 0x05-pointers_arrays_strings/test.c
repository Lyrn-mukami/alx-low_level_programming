#include <stdio.h>
#include "main.h"
/**
 * _print_rev - used to print the length of a string
 * @s: pointer to point to string memory
 *
 * Return: length of string
 */
void _print_rev(char *s)
{
	int count = 0;
	int i;
	int end;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	end = count -1;
	for ( i = end; i >= 0; i--)
	{
		s--;
		putchar(*s);
	}
	putchar('\n');	
}
int main(void)
{
	    char *str;
		str = "Holberton!";
		    _print_rev(str);
		        return (0);
}
