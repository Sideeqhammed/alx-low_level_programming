#include "main.h"

/**
 * positive_or_negative - check for positive or negative number
 *
 * @i: number checked
 *
 * Return: always o
 */
void positive_or_negative(int i)
{
	if (i >= 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
