#include "main.h"

/**
 * _isdigit -name of the funtion
 * @c:value of parameter
 * Return: value of 'if' and 'else if'
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	} else if (c != '0' && c != '9')
	{
		return (0);
	}
	return (0);
}
