#include "main.h"

/**
 * print_alphabet_x10 - to print ten times the letters
 */

void print_alphabet_x10(void)
{
	char j;
	char k;

	for (j = 'a'; j <= 'z'; j++)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(j);

		_putchar('\n');
	}
}
