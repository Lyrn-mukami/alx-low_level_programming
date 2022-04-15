#include <stdio.h>
/**
 * main - print the combination of numbers and arranges them in ascending order
 * @void is used since there is no retun value expected
 *
 * Return: Its zero since there is no return value
 **/
int main (void)
{
	int a;
	int b;
	int c;

	for(a = '0'; a<= '7'; a++)
	{
		for(b = '0'; b<= '8'; b++)
		{
			for(c = '0'; c<= '9'; c++)
			{
				if (a < 7 && b < 8 && c < 9)
				{
					putchar(',');
					putchar(' ');
				}
				if ((a != b && a != c && b != c) && (c > b && b > a))
				{
					putchar(a);
					putchar(b);
					putchar(c);
				}
			}
		}
	}
	putchar('\n');

	return(0);
}
