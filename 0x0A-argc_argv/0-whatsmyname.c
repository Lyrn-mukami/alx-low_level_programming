#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: prints arguments passed
 * @argv: prints values of arguments passed
 * Return: returns 0
 **/
int main(int argc, char* argv[])
{
	argc -= 1;
	printf("%s\n", argv[argc]);
	return (0);
}
