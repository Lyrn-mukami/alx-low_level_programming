#include <stdio.h>
/**
 * print_alphabet_x10 - prints alphabets
 *
 * Return: to match function return type
 **/
void print_alphabet_x10(void)
{
	int i = 1;
	
	while (i <= 3)
	{

		char alpha = 'a';
		
		while (alpha <= 'z')
		{
			putchar(alpha);
			alpha++;
		}
	putchar('\n');
	i++
	}
}
