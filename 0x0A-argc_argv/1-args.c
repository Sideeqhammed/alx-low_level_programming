#include <stdio.h>

/**
 *main - main function
 *@argc: argument count
 *@argv: argument vector
 *Return: always 0.
 */
int main(int argc, char *argv[])
{
	int a;

	a = 1;
	(void)argv;
	printf("%d \n", argc - a);

	return (0);
}
