#include "main.h"

/**
 * _puts_recursion - name of funtion
 * @s: pointer to array with strings
 * Return: value that print in pointer
 */

void _puts_recursion(char *s)
{
	if (!s || !*s)
	{
		_putchar(new_line);
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
