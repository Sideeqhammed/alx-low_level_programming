#include "main.h"

/**
 * print_alphabet - function to print letters
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z';)
	{
	_putchar(j);
	j++;
	}
	_putchar('\n');
}
