#include <stdio.h>

/**
 * main - name is funtion
 * Return: value of funtion 'main'
*/

int main(void)
{
	int number_A, number_B;
	int Comma = 44;
	int Space = 32;
	int new_line = 10;

	for (number_A = 48; number_A < 58; number_A++)
	{
		for (number_B = 48; number_B < 58; number_B++)
		{
			if (number_A < number_B)
			{
				putchar(number_A);
				putchar(number_B);
				if (number_A != 56)
				{
					putchar(Comma);
					putchar(Space);
				}
			}
		}
	}

	putchar(new_line);
	return (0);
}
