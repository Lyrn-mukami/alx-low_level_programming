#include <stdio.h>
#include "main.h"

/**
 * print_name - prints name according to function given
 * @name: pointer to char being printed
 * @f: pointer to the function to be used
 *
 * Return: non-expected
 **/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
