#include "main.h"

/**
 * puts_half - prints half the number of string
 * @str: string to be printed
 * _putchar - prints a char
 */
void puts_half(char *str)
{
	int a;
	int b;

	for (a = 0; str[a] != '\0'; a++)
		continue;
	for (b = a / 2; str[b] != '\0'; b++)
		_putchar (str[b]);
	_putchar ('\n');
}
