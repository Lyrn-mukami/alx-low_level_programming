#include <stdio.h>

/**
 * add - used to print the last digit of a number
 *@void no return expected
(*
 * Description:print the product of numbers)?
 * Return: Always 0
 **/
int add(int num1, int num2)
{
	int result;

	result = 0;

	result = num1 + num2;
	
	return (result);
}
int main (void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}
