#include <stdio.h>
#include "main.h"
/**
 * rev_string - used to print a string in reverse
 * @s: pointer to point to string memory
 *
 * Return: length of string
 */
void rev_string(char *s)
{
	int count = 0;
	int i;
	int end;
	int j;
	char arr[30];
	while (*s != '\0')
	{
		count++;
		s++;
	}
	end = count - 1;

	for (i = 0; i<= end;)
	{
			s--;
			arr[i] = *s;	
			i++;
	}
	
	for (j = 0; j <= end;)
	{
		s[j] = arr[j];
		j++;
	}	
}

int main(void)
{
	    char s[10] = "My School";

	        printf("%s\n", s);
		    rev_string(s);
		        printf("%s\n", s);
			    return (0);
}
