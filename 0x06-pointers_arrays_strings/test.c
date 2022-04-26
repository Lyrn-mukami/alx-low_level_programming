#include <stdio.h>
#include "main.h"
/**
 * *_strncat - adds elements of src to dest
 * @dest: array to be inserted elements
 * @src: array to be concatenated
 * @n:limit to concatenation
 *
 * Return: dest array
 **/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int k = 0;
	int j = 0;
	int sum = 0;

	while (dest[i++])
	{
		k++;
	}
	printf("size of dest is %d", k);
	sum = k + n;
	j = 0;

	for (i = k; i < sum;)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

int main(void)
{
	    char s1[98] = "Hello ";
	        char s2[] = "World!\n";
		    char *ptr;

		        printf("%s\n", s1);
			    printf("%s", s2);
			        ptr = _strncat(s1, s2, 1);
				    printf("%s\n", s1);
				        printf("%s", s2);
					    printf("%s\n", ptr);
					        ptr = _strncat(s1, s2, 1024);
						    printf("%s", s1);
						        printf("%s", s2);
							    printf("%s", ptr);
							        return (0);
}
