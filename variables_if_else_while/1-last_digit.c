#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - name of funtion
 * Return: value of funtion 'main'
*/

int main(void)
{
	int n, line;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	line = n % 10;
	if (line == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, line);
	}
	if (line < 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, line);
	}
	if (line > 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, line);
	}
	return (0);
}
