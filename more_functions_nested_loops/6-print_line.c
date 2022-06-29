#include "main.h"

/**
 * print_line - name of funtion
 * @n: value of parameter
 * Return: 0
 */

void print_line(int n)
{
	int count = 0;
	char line_ = 95;
	char new_line = 10;

	if (n > 0)
	{
		while (count < n)
		{
			_putchar (line_);
			count++;
		}
		_putchar (new_line);
	}
	else
	{
		_putchar(new_line);
	}
}
