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

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a == '9')
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
