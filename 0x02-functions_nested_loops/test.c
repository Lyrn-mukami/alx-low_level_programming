#include <stdio.h>

/**
 * _abs - used to print numbers after the number has been checked
 * ignores sign
 * @n: param passed
(*
 * Description:Used to check signs of numbers)?
 * Return: Always 0
 **/
int _abs(int n)
{
	if (n > 0)
	{
		putchar(n);
		return (1);
	}
	else if (n < 0)
	{
		putchar(n);
		return (1);
	}
	else
	{
		putchar(n);
		return (0);

	}
}
int main(void){
int r;

r = _abs(-1);
printf("%d\n", r);
r = _abs(0);
printf("%d\n", r);
r = _abs(1);
printf("%d\n", r);
r = _abs(-98);
printf("%d\n", r);
return (0);
}
