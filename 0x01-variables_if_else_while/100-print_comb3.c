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

	for (a = '0'; a <= '3'; a++)
	{
		for (b = '1'; b<='3'; b++)
		{
			if(a != b && a < b)
			{
			putchar (a);
			putchar (b);
				if (a =='2' && b == '3')
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
