#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - prints out whether  number is +ve, ve or zero
 * @void is used since ony printing is involved
 *
 * Return: return zero to match the void parameter
 **/
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
