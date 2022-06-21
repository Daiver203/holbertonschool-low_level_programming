#include "main.h"

/**
 * print_alphabet_x10 - name of the funtion
 *
 * Return: value in zero
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int count = 0;
	char new_line = '\n';

	while (count < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
	count++;
	}
	_putchar(new_line);
}
