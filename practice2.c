#include <stdio.h>

int main(void)
{
	int i = 0, j;

	while (i < 5)
	{
		j = 0;
		
		while (j < 5)
		{
			printf("hey ");
			j++;
		}

		printf("\n");
		i++;
	}
	return (0);
}

