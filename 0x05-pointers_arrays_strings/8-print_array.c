#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: array name
 * @n: number of array elements
 * printf - to print
 */
void print_array(int *a, int n)
{
	for (n = 0; n <= 3; n++)
		printf("%d, ", a[n]);
	printf("%d", a[4]);
	printf("\n");
}
