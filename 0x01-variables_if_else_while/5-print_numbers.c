#include <stdio.h>
/**
 * main - used to print numbers 0 to 9
 * @void no int return type is expected thus the use of void
 *
 *Return: 0 used to match param
 **/
int main(void)
{
	int number;

	for (number = 0 ; number < 10; number++)
	{
		printf("%d", number);
	}
	putchar('\n');
	return (0);
}
