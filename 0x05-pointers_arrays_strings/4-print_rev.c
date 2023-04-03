#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints the reverse of astring
 * @s: string
 * _putchar - displays a string
 */
void print_rev(char *s)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		continue;
	}
	for (b = a - 1; b >= 0; b--)
	{
		_putchar (s[b]);
	}
	_putchar ('\n');
}
