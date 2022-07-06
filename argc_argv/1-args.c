#include "main.h"

/**
 * main - name of funtion
 * @argc: value of parameters
 * @argv: value of parameters
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int i;

	(void) *argv;
	for (i = 0; i < argc; i++)
		printf("%d\n", i - 1);

	return (0);
}
