#include <stdio.h>
#include <ctype.h>
/**
 * main - used to print numberbets in lowercase
 * @void no int return type is expected thus the use of void
 *
 *Return: 0 used to match param
 **/
int main(void)
{
	int number;
	int hexLetter;

		for (number = '0' ; number <= '9'; number++)
		putchar(number);
			for (hexLetter = 'a' ; hexLetter <= 'f'; hexLetter++)
			putchar(hexLetter);
			putchar('\n');
	return (0);
}
