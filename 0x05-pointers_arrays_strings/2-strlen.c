#include "main.h"
#include <stdio.h>

/**
 * _strlen - prints the length of a char
 * @s: char which length is evaluated
 * Return: value of a
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0';)
		++a;
	return (a);
}
