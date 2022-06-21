#include <stdio.h>

/**
 * main - name of funtion
 *
 * Return: value to zero
*/

int main(void)
{
	char caracters[8] = "_putchar";
	int i = 0;
	char new_line = '\n';

	while (caracters[i] != '\0')
	{
		putchar(caracters[i++]);
	}
	putchar(new_line);
	return (0);
}
