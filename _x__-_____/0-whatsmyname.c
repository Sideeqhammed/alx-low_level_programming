#include <stdio.h>

/**
 * main - main function
 *@argc: argument count
 *@argv: argument vector
 *Return: always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s \n", argv[i]);
	return (0);
}
