#include "main.h"

/**
 * _print_rev_recursion - prints reverse of a string using recursion
 * @s: string to be printed
 *_putchar - prints a char
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
