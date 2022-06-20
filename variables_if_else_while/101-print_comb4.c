#include <stdio.h>

/**
 * main - name is funtion
 * Return: value of funtion 'main'
*/

int main(void)
{
	int Number_A;
	int Number_B;
	int Number_C;
	int Comma = 44;
	int Space = 32;
	int new_line = 10;

	for (Number_A = 48; Number_A < 58; Number_A++)
	{
		for (Number_B = 48; Number_B < 58; Number_B++)
		{
			for (Number_C = 48; Number_C < 58; Number_C++)
			{
				if (Number_A < Number_B && Number_B < Number_C)
				{
					putchar(Number_A);
					putchar(Number_B);
					putchar(Number_C);

					if (Number_A != 55)
					{
						putchar(Comma);
						putchar(Space);
					}
				}
			}
		}
	}
	putchar(new_line);
	return (0);
}
