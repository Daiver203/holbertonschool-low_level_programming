#include "main.h"

/**
 * print_diagonal - name of the function
 * @n: value of parameter
 * Return: value 0
*/

void print_diagonal(int n)
{
	int a = 0;
	int b = 0;
	char space = 32;
	char new_line = 10;

	if (n > 0)
	{
		while (a < n)
		{
			while (b < a)
			{
				_putchar(space);
				b++;
			}
			a++;
			b = 0;
			_putchar('\\');
			_putchar(new_line);
		}
	}
	else
	{
		_putchar(new_line);
	}
}
