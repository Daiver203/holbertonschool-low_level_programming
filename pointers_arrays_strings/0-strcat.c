#include "main.h"

/**
 * _strcat - name os funtion
 * @dest: value of parameter
 * @src: value of parameter
 * Return: value of pounter 'dest'
*/

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
