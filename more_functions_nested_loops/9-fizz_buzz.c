#include <stdio.h>

/**
 * main - name of the function
 * Return: always 0
*/

int main(void)
{
	int numbers;
	char new_line = 10;

	for (numbers = 1; numbers < 100; numbers++)
	{
		if (numbers % 5 == 0 && numbers % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (numbers % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (numbers % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", numbers);
		}
	}
	printf("Buzz");
	putchar(new_line);
	return (0);
}
