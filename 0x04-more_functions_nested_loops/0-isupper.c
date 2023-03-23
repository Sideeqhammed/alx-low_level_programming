#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: a;ways 0
 */
int main(void)
{
	char c;

	if (c >= 'a')
		printf("%d\n", _isupper(c));
	if (c >= 'A')
		printf("%d\n", _isupper(c));
	return (0);
}
