#include <stdio.h>

/**
 * main - name is funtion
 * Return: value of funtion 'main'
*/

int main(void)
{
	int Combined_Numbers;
	int Comma = 44;
	int Space = 32;
	int new_line = 10;

	for (Combined_Numbers = 48; Combined_Numbers < 58; Combined_Numbers++)
	{
		putchar(Combined_Numbers);

		if (Combined_Numbers < 57)
		{
			putchar(Comma);
			putchar(Space);
		}
	}
	putchar(new_line);
	return (0);
}
