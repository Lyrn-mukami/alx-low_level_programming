#include <stdio.h>

/**
 * print_to_98 - used to print the last digit of a number
 *@n:value to be checked
(*
 * Description:print the numbers from n to 98)?
 * Return: Always 0
 **/
void print_to_98(int n)
{
	while(n < 98)
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
int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);
}
