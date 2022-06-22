#include "main.h"
/**
 * times_table - name of the function
*/
void times_table(void)
{
	int a = 0;
	int b;
	int table;
	char new_line = '\n';

	while (a < 10)
	{
		_putchar('0');
		_putchar(',');
		b = 1;

		while (b < 10)
		{
			table = a * b;
			if (table >= 10)
			{
				_putchar(' ');
				_putchar((table / 10) + '0');
				_putchar((table % 10) + '0');
			} else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(table + '0');
			}
			if (b < 9)
			{	_putchar(',');
			}
			b++;
		}
		_putchar(new_line);
		a++;
	}
}
