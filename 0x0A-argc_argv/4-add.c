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

	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			if (*argv[i] < '0' || *argv[i] > '9')
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
