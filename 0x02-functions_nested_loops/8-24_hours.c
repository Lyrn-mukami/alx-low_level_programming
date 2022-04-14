#include "main.h"

/**
 * jack_bauer - used to print the last digit of a number
(*
 * Description:print the numbers from n to 98)?
 * Return: Always 0
 **/
void jack_bauer(void)
{
	int h1;
	int h2;
	int m1;
	int m2;
	int limit = 9;

	h1 = 0;
	while (h1 <= 2)
	{
		if (h1 == 2)
		{
			limit = 3;
		}
		h2 = 0;
		while (h2 <= limit)
		{
			m1 = 0;
			while (m1 <= 5)
			{
				m2 = 0;
				while (m2 <= 9)
				{
					_putchar(h1 + '0');
					_putchar(h2 + '0');
					_putchar(':');
					_putchar(m1 + '0');
					_putchar(m2 + '0');
					_putchar('\n');
					m2++;
				}
				m1++;
			}
			h2++;
		}
		h1++;
	}
}
