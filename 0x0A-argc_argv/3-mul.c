#include <stdio.h>
#include <stdlib.h>

/**
 *main - main function
 *@argc: argument count
 *@argv: argument vector
 *Return: always 0.
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc < 3 && argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d \n", a * b);
	return (0);
}
