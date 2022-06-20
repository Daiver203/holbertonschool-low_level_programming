#include <stdio.h>

/**
 * main - name is funtion
 * Return: value of funtion 'main'
*/

int main(void)
{
	int number_divisible = 48;
	char new_line = '\n';

	for (number_divisible = 48; number_divisible <= 57; number_divisible++)
	{
		putchar(number_divisible);
	}
	putchar(new_line);
	return (0);
}
