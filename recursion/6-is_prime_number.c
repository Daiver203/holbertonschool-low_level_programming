#include "main.h"

/**
 * is_prime_number - name of the function
 * @n: value know if a prime number
 * Return: if is prime number
*/

int is_prime_number(int n)
{
	return (_prim(2, n));
}

/**
 * _prim - name of the function
 * @a: value to evaluate
 * @n: value know if a prime number
 * Return: n if is prime
*/

int _prim(int a, int n)
{
	if (n <= 1 || (n != a && n % a == 0))
		return (0);

	if (n == a)
		return (1);

	return (cal_prim(a + 1, n));
}
