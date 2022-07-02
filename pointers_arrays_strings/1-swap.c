#include "main.h"

/**
 * swap_int - name of funtion
 * @a: value of parameter
 * @b: value of parameter
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
