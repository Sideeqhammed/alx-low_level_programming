#include <stdio.h>
#include "main.h"
#include <string.h>

void rev_string(char *s)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
		continue;
	for (b = a; b >= 0; b--)
		_putchar (s[b]);
}
