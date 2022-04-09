#include <stdio.h>
#include <ctype.h>
/**
 * main - used to print alphabets in lowercase
 * @void no int return type is expected thus the use of void
 *
 *Return: 0 used to match param
 **/
int main(void)
{
	int alpha;
	int alphaUpper;

		for (alpha = 'a' ; alpha <= 'z'; alpha++)
		putchar(alpha);
			for (alphaUpper = 'A' ; alphaUpper <= 'Z'; alphaUpper++)
			putchar(alphaUpper);
			putchar('\n');
	return (0);
}
