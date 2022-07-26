#include "main.h"

/**
 * leet - name of the function
 * @a: pointer to array
 * Return: array of value to ret
*/

char *leet(char *a)
{
	int b = 0, c;
	char value[] =  "aAeEoOtTlL";
	char ret[] = "4433007711";

	while (a[b] != '\0')
	{
		c = 0;
		while (value[c] != '\0')
		{
			if (a[b] == value[c])
			{
				a[b] = ret[c];
			}
			c++;
		}
		b++;
	}
	return (a);
}
