#include "main.h"

/**
 * _strncat - name of function
 * @dest: value of pointer of array
 * @src: value of pointer of array
 * @n: value of parameter for print
 * Return: array 'dest'
*/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0, c = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		b++;
	}
	while (c <= b)
	{
		if (n > 0)
		{
			dest[a] = src[c];
			a++;
			c++;
			n--;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
