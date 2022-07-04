#include "main.h"

/**
 * _strncpy - name of the function
 * @dest: value of pointers
 * @src: value of pointers
 * @n: value of strings
 * Return: pointer of array 'dest'
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
