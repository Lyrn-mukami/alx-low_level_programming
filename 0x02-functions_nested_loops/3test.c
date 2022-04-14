
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

	h1 = 0;
	while (h1 == 0)
	{
		h2 = 0;
		while (h2 == 0)
		{
			m1 = 0;
			while (m1 <= 5)
			{
				m2 = 0;
				while (m2 <= 9)
				{
					putchar(h1);
					putchar(h2);
					putchar(':');
					putchar(m1);
					putchar(m2);
					m2++;
				}
				m1++;
			}
		}
	}
}
int main(void)
{
	jack_bauer();
	return (0);
}
