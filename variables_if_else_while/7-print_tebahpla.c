#include <stdio.h>

/**
 * main - name is funtion
 * Return: value of funtion 'main'
*/

int main(void)
{
	int reverse_alphabet = 122;

	for (reverse_alphabet = 122; reverse_alphabet > 96; reverse_alphabet--)
	{
		putchar(reverse_alphabet);
	}
	putchar('\n');
	return (0);
}
