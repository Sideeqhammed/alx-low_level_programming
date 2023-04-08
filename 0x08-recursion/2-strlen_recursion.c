#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: string
 * Return: length of string
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
