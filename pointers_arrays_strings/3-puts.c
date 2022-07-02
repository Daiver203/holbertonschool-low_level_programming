#include "main.h"

/**
 * _puts - name of funtion
 * @str: value of parameter
 * Return: value 0
 */

void _puts(char *str)
{
	int i = 0;
	char new_line = 10;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar(new_line);
}
