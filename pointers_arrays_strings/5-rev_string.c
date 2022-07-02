#include "main.h"

/**
 * rev_string - name of funtion
 * @s: value of parameter
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0, a = 0, b;

	for (i = 0; s[i] != '\0'; i++)

	i--;
	while (i > a)
	{
		b = s[i];
		s[i--] = s[a];
		s[a++] = b;
	}
}
