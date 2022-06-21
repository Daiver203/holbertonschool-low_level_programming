#include "main.h"

/**
 * print_alphabet - name of funtion
 *
 * Return: value of funtion
*/

void print_alphabet(void)
{
	char alphabet = 'a';
	char new_line = '\n';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar(new_line);
	return (0);
}
