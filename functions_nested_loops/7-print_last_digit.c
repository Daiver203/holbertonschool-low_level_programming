#include "main.h"

/**
 * print_last_digit - name of the function
 * @x: value of parameter
 * Return: last digit
*/

int print_last_digit(int x)
{
	_putchar(_abs(x % 10) + '0');
	return (_abs(x % 10));
}

/**
 * _abs - name of the function
 * @p: value of ingrese
 * Return: positive number
*/

int _abs(int p)
{
	return ((p < 0) ? -p : p);
}
