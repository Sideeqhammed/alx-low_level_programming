#include "main.h"

/**
 * _puts - prints a char
 * @str: char to be printed
 * _putchar - prints a char
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar (*str++);
	}
	_putchar ('\n');
}
