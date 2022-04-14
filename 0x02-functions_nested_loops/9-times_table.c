#include "main.h"

/**
 * times_table - used to print the last digit of a number
 *@void no return expected
(*
 * Description:print the product of numbers)?
 * Return: Always 0
 **/
void times_table(void)
{
	int num1;
	int num2;
	int result;

	num1 = 0;

	while (num1 <= 9)
	{
		num2 = 0;

		while (num2 <= 9)
		{
			result = 1;

			result = num1 * num2;
			if (num2 == 0)
			{
				_putchar(result + '0');
			}
			else if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			num2++;
		}
		_putchar ('\n');
		num1++;
	}
}
