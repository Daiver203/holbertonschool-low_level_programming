#include "main.h"

/**
 * _islower - name of funtion
 * @c: parameter of funtion
 * Return: value one if and zero else
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	} else
		return (0);
}
