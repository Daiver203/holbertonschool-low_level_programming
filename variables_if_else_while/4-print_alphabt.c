#include <stdio.h>

/**
 * main - name of funtion
 * Return: value of funtion
*/

int main(void)
{
	char lowercase_alphabet = 97;
	char new_line = '\n';

	for (lowercase_alphabet = 97; lowercase_alphabet <= 122; lowercase_alphabet++)
	{
		if (lowercase_alphabet != 101 && lowercase_alphabet != 113)
		{
		putchar(lowercase_alphabet);
		}
	}
	putchar(new_line);
	return (0);
}
