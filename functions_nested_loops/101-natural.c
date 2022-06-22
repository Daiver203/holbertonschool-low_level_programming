#include "main.h"

/**
 * main - name of the function
 * Return: always 0
*/

int main(void)
{
	int number, a;
	char new_line = '\n';

	a = 0;

	for (number = 0; number < 1024; number++)
	{
		if (number % 3 == 0 || number % 5 == 0)
		{
			a += number;
		}
	}
	_putchar((a / 100000) + '0');
	_putchar(((a / 10000) % 10) + '0');
	_putchar(((a / 1000) % 10) + '0');
	_putchar(((a / 100) % 10) + '0');
	_putchar(((a / 10) % 10) + '0');
	_putchar((a % 10) + '0');
	_putchar(new_line);
	return (0);
}
