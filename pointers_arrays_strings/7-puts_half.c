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
	if (i % 2 != 0)
	{
		a = ((i + 1) / 2);
	}
	else
	{
		a = i / 2;
	}
	while (a < i)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar(new_line);
}
