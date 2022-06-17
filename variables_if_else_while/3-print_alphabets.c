#include <stdio.h>

/**
 * main - name of funtion
 * Return: value of funtion
*/

int main(void)
{
	char uppercase_alphabet = 65;
	char lowercase_alphabet = 97;
	char new_line = '\n';

	for (lowercase_alphabet = 97; lowercase_alphabet <= 122; lowercase_alphabet++)
	{
		putchar(lowercase_alphabet);
	}

	for (uppercase_alphabet = 65; uppercase_alphabet <= 90; uppercase_alphabet++)
	{
		putchar(uppercase_alphabet);
	}
	putchar(new_line);
	return (0);
}
