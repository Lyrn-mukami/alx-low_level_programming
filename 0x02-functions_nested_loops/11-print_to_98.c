#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - used to print the last digit of a number
 *@n:value to be checked
(*
 * Description:print the numbers from n to 98)?
 * Return: Always 0
 **/
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
