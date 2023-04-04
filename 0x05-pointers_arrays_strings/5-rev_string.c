#include <stdio.h>
#include "main.h"
#include <string.h>

void rev_string(char *s)
{
	*s = strrev(s);
	while (s++)
		_putchar (s++);
}
