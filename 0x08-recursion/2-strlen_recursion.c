#include "main.h"

/**
 *
 *
 */
int _strlen_recursion(char *s)
{
	int a;

	a = 1;
	if (*s != '\0')
	{
		return (a + _strlen_recursion(s + 1));
	}
	return (0);
}
