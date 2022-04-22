#include <stdio.h>
#include "main.h"
/**
 * puts2 - used to print digits at multiple of 2 positions
 * @str: pointer used
 *
 * Return: non expected
 */
void puts2(char *str)
{
	int count = 0;
	int i;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	printf("total is %d", count);
	for (i = 0; i <= count; i ++)
	{
		if (*str % 2 == 0)
		{
			putchar(*str);
			str++;
		}
	}

}

int main(void)
{
	    char *str;
		str = "0123456789";
		    puts2(str);
		        return (0);
}
