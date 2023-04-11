#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
* @argc: int
* @argv: list
* Return: always 0.
*/

int main(int argc, char *argv[])
{
	int i, sum = 0, num;
	char *c;

	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];
			num = atoi(argv[i]);
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
