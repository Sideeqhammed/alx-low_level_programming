#include "main.h"
#include <stdio.h>

/**
 * _isdigit - ckecks for digits
 * @c: digit to be checked
 * Return: 1 for digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else if (c >= 65 && c <= 90)
		return (0);
	else
		return (1);
}
