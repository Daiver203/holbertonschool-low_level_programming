#include "main.h"

/**
 * _strcpy - name of the function
 * @dest: array
 * @src: number of array
 * Return: nothing
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
