#include <stdio.h>

/**
 * jack_bauer - used to print the last digit of a number
 *@n:value to be checked
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
					putchar(h1 + '0');
					putchar(h2 + '0');
					putchar(':');
					putchar(m1 + '0');
					putchar(m2 + '0');
					putchar('\n');
					m2++;
				}
				m1++;
			}
			h2++;
		}
		h1++;
	}
}
int main(void)
{
	jack_bauer();
	return (0);
}
