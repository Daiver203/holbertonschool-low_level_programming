#include <stdio.h>

/**
 * main - name of funtion
 * Return:value 0;
*/

int main()
{
	char lowercase_alphabet = 97;
	char new_line = '\n';

	for (lowercase_alphabet = 97; lowercase_alphabet <= 122; lowercase_alphabet++)
	{
		putchar(lowercase_alphabet);
		putchar(new_line);
	}
	return (0);
}

