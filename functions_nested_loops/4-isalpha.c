#include "main.h"

/**
 * _isalpha -name of funtion
 * @c: parameter of funtion
 * Return: value one if and zero else
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	} else
		return (0);
}
