#include <stdio.h>

/**
 * main - name is funtion
 * Return: value of funtion 'main'
*/

int main(void)
{
	int number_base16 = 48;
	int base_16 = 65;
	char new_line = '\n';

	for (number_base16 = 48; number_base16 <= 57; number_base16++)
	{
		putchar(number_base16);
	}

	for (base_16 = 65; base_16 <= 70; base_16++)
	{
		putchar(base_16);
	}
	putchar(new_line);
	return (0);
}
