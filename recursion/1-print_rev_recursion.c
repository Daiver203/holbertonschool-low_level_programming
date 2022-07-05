#include "main.h"

/**
 * _print_rev_recursion - name of the function
 * @s: pointer to array of parameter
 * Return: reverse array of pointer of the funtion 's'
*/

void _print_rev_recursion(char *s)
{
	if (!s || !*s)
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
