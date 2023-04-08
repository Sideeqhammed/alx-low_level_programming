#include "main.h"

/**
 *
 *
 */
int _strlen_recursion(char *s)
{
	int a;

	a = 0;
	if (*s != '\0')
	{
		a++;
		s++;
		_strlen_recursion(s + 1);
	}

	return (a + _strlen_recursion(s + 1));
	if (*s == '\0')
		return (0);
}
