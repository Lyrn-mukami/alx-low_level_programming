#include <stdio.h>
/**
 * main - used to print 1-100 multiples of 5 buzz
 * multiples of 3 Fizz
 * @void
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("Buzz\n");
		}
		else if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("Fizz ");
			}
		}
		else if (i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
