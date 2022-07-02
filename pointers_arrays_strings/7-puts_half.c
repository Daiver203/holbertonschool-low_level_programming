#include "main.h"

/**
 * puts_half - name of the function
 * @str: pointer
 * Return: nothing
*/

void puts_half(char *str)
{
	int i = 0, a;
	char new_line = 10;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 1)
	{
		for (i = (i + 1) / 2; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
	else
	{
		for (a = (i / 2); str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar(new_line);
}
