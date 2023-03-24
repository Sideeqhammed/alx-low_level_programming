#include "main.h"

/**
 * _isupper - checks for character case
 *
 * @c: character to be checked
 *
 * Return: 0 for lowercase and 1 for uppercase
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (1);
}
