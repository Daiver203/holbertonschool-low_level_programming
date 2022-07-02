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

	for (i = 0; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar(new_line);
}
