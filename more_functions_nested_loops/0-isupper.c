#include "main.h"

/**
 * _isupper - name of the funtion
 * @c: value of parameter
 * Return: value of 'if' and 'else if'
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	} else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	return (0);
}
