#include "main.h"

/**
 * _sqrt_recursion - name of the function
 * @n: value of parameter
 * Return: square natural
*/

int _sqrt_recursion(int n)
{
	return (pow_recursion(0, n));
}

/**
 * pow_recursion - name of the function
 * @a: value of parameter
 * @n: compare value of parameters
 * Return: value to power itself
*/

int pow_recursion(int a, int n)
{
	if (a * a == n)
		return (a);

	if (a * a > n)
		return (-1);

	return (pow_recursion(a + 1, n));
}
