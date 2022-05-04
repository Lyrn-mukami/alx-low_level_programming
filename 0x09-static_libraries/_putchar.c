#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints charachters
 * @c: variable used
 *
 * Return: characters
 **/
int _putchar(char c)
{
return (write(1, &c, 1));
}
