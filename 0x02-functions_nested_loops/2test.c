#include <stdio.h>

/**
 * times_table - used to print the last digit of a number
 *@void no return expected
(*
 * Description:print the product of numbers)?
 * Return: Always 0
 **/
int times_table(void)
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
			
			if (result > 9)
			{
				putchar((result/10) + '0');
				putchar(result%10 + '0');
			}
			else
			{
				putchar(' ');
				putchar(result + '0');
			}
			if (num2 < 9 )	
				putchar(',');
				putchar(' ');
			num2++;
		}
		putchar ('\n');
		num1++;
	}
	return(0);
}

int main(void)
{
	times_table();
	return (0);
}
