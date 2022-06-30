#include "main.h"

/**
 * print_triangle - name of the function
 * @size: value of parameter
 * Return: value 0
*/

void print_triangle(int size)
{
	int row, column, a;
	char space = 32;
	char caracter = 35;
	char new_line = 10;

	if (size <= 0)
	{
		_putchar(new_line);
	}
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
		{
			_putchar(space);
		}
		for (a = row + column; a >= 1; a--)
		{
			_putchar(caracter);
		}
		_putchar(new_line);
	}
}
