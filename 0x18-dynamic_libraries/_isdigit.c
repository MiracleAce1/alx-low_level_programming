#include "main.h"

/**
 * _isdigit - checks for the  digits
 * @c: the parameter to check
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);

	else
		return (0);
}
