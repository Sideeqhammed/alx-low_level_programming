#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char type1;
	int type2;
	long type3;
	long long type4;
	float e;

	printf("size of a char: %lu bytes(s)\n", sizeof(type1));
	printf("size of an int: %lu bytes(s)\n", sizeof(type2));
	printf("size of a long int: %lu bytes(s)\n", sizeof(type3));
	printf("size of a long long int: %lu bytes(s)\n", sizeof(type4));
	printf("size of a float: %lu bytes(s)\n", sizeof(e));
	return (0);
}
