#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int i;

	srand(time(0));
	i = rand();
	printf("%i\n", i);
	return (0);
}
