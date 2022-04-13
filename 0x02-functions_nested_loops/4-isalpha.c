#include <stdio.h>

/**
 * _isalpha - used to check for lowercase and upercase
 * @c: is the asigned varible to be used
(*
 * Description: the program checks whether a value is lower and
 * uppercase and prints 1 if true else 0)?
(* section header: Section description)*
 * Return: always 0
 **/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
