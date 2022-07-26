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
	int a = 0;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	for (; a < n; a++)
		dest[a] = '\0';

	return (dest);
}
