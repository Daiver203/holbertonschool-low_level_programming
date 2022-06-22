#include "main.h"

/**
 * print_to_98 - name of funtion
 * @n: value of parameter
 * Return: always zero
*/

void print_to_98(int n)
{
	int numbers = n;

	while (numbers < 98)
	{
		printf("%d, ", numbers);
		numbers++;
	}
	while (numbers > 98)
	{
		printf("%d, ", numbers);
		numbers--;
	}
	if (numbers == 98)
	{
		printf("%d\n", numbers);
	}
}
