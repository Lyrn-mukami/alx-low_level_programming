#include "main.h"
/**
 * main - prints alphabets
 *
 * Return: to match function return type
 **/
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');

	return (0);
}