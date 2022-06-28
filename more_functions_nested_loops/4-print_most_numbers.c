#include "main.h"

/**
 * print_most_numbers - name of the function
 * Return: value 0
 */

void print_most_numbers(void)
{
	int count = 48;
	char new_line = 10;

	for (count = 48; count <= 57; count++)
	{
		if (count != 50 && count != 52)
		{
			_putchar(count);
		}
	}
	_putchar(new_line);
}
