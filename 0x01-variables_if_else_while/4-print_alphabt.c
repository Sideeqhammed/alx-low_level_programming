#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char s;

	for (s = 'a' ; s <= 'z' ; s++)
		if (s != 'q' && s != 'e')
			putchar(s);
	return (0);
}
