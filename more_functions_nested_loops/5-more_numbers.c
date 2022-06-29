#include "main.h"

/**
 * more_numbers - name of the funtion
 * Return: value 0
 */

void more_numbers(void)
{
	char numbers;
	int count = 0;
	char new_line = 10;

	while (count < 10)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers >= 10)
			{
				putchar((numbers / 10) + '0');
			}
			putchar((numbers % 10) + '0');
		}
		count++;
		putchar(new_line);
	}
}
