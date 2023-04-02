#include <stdio.h>

/**
 * swap_int - swaps two integers
 * @a: int one
 * @b: int two
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
