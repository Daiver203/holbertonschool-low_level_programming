#include "main.h"

/**
 * main - name of funtion
 * @argc: value of parameters
 * @argv: value of parameters
 *
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%s\n", atoi(argv[1]) * atoi(argv[2]));

	else
		printf("Error\n");

	return (0);
}
