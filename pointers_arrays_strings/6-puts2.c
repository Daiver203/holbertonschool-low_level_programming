#include "main.h"

/**
 * puts2 - name of the function
 * @str: pointer
 * Return: nothing
*/

void puts2(char *str)
{
	int i = 0;
	char new_line = 10;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar(new_line);
}
