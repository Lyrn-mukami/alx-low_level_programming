#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - used to check whether n>5, ==0 or <6 && >0 and prints it
 * @void - only printing is involved
 *
 * Return: return 0 to match void param
 **/
int main(void)
{
	int n;
	int lastDigit;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	x = lastDigit;
	if (x > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (x == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, x);
	}
	else if (x < 6 && x != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	return (0);
}
