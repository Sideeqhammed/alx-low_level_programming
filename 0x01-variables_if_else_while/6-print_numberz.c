#include <stdio.h>

/**
 * main - start of code
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	int j = 10;

	for (i = 0; i <= 9; i++)
	{
		if (j > 9)
		{
		       putchar('\n');
		}
		putchar('0' + i);
	}
	return (0);
}
