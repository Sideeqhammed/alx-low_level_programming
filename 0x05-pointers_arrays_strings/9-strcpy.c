#include <stddef.h>
#include "main.h"

/**
 * *_strcpy - copies a string
 * @src: string to be copied
 * @dest: destination to be copied to
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
