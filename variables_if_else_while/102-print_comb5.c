#include <stdio.h>
/**
 * main - name of the funtion
 * Return: value of funtion 'main'
*/
int main(void)
{
	int number_a = 48, number_b = 48, number_c, number_d;
	int Space = 32, Comma = 44, new_line = 10;

	while (number_a < 58)
	{
		while (number_b < 58)
		{
			number_d = number_b + 1;
			number_c = number_a;

			while (number_c < 58)
			{
				while (number_d < 58)
				{
					putchar(number_a);
					putchar(number_b);
					putchar(Space);
					putchar(number_c);
					putchar(number_d);
					if (number_a < 57 || number_b < 56 || number_c < 57 || number_d < 57)
					{
						putchar(Comma);
						putchar(Space);
					} number_d++;
				}
			number_d = 48;
			number_c++;
			} number_b++;
		}
	number_a++;
	} putchar(new_line);
	return (0);
}
