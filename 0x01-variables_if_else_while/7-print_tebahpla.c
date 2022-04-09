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

	for (alpha = 'z' ; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
