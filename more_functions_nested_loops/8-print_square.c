#include "main.h"

/**
 * print_square - name of the function
 * @size: value of parameter
 * Return: value always 0
*/

void print_square(int size)
{
	int a = 0;
	int b = 0;
	char new_line = 10;
	char caracter = 35;

	if (size > 0)
	{
		while (a < size)
		{
			while (b < size)
			{
				_putchar(caracter);
				b++;
			}
			a++;
			b = 0;
			_putchar(new_line);
		}
	}
	else
	{
		_putchar(new_line);
	}
}
