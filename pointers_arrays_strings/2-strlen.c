#include "main.h"

/**
 * _strlen - name of funtion
 * @s: value of parameter
 * Return: value of the 'int'
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
