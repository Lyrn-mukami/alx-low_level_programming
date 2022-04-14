#include <stdio.h>
/**
 * main - prints numbers combinations
 *@void - no return since its print
 *
 *Return: to match void param
 **/
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '8'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			if (a != b && a < b)
			{
			putchar (a);
			putchar (b);
				if (a == '8' && b == '9')
				{
					break;
				}
			putchar (',');
			putchar (' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
