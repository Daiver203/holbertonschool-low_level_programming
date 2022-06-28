#include "main.h"

/**
 * print_numbers - name of the funtion
 * Return: value 0
 */

void print_numbers(void)
{
	int count = 48;
	char new_line = 10;

	while (count <= 57)
	{
		_putchar(count);
		count++;
	}
	_putchar(new_line);
}
