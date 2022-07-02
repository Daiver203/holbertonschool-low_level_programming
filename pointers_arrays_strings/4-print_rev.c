#include "main.h"

/**
 * print_rev - name of funtion
 * @s: value of parameter
 * Return: nothing
*/

void print_rev(char *s)
{
	int i = 0;
	char new_line = 10;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar(new_line);
}
