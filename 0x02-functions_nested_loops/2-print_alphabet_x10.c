#include "main.h"

/**
 * print_alphabet_x10 - to print ten times the letters
 */

void print_alphabet_x10(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);

		_putchar(j);
	}
}
