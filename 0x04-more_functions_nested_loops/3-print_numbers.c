#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @c: number to be printed
 */
void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
		_putchar(c);
	_putchar('\n');
}
