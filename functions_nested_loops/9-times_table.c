#include "main.h"
/**
 * times_table - name of the function
 * Return: always zero
*/
void times_table(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		int b;

		for (b = 0; b < 10; b++)
		{
			int c = a * b;
			
			if (b == 0)  else
			{
			if (c / 10 != 0)
			{
				_putchar(44);
				_putchar(' ');
			} else
			{
			_putchar(44);
			_putchar(' ');
			_putchar(' ');
			}
			}
			if (c / 10 == 0)
			{
				_putchar(c + '0');
			} else
			{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			}
		} _putchar('\n');
	}	}

