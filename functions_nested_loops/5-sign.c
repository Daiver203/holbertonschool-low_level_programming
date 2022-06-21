#include "main.h"

/**
 * print_sign - name of funtion
 * @n: value of parameter
 * Return: value dependent on an if
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	return (0);
}
