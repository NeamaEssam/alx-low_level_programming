#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - main function
* @argc: int
* @argv: list
* Return: always 0.
*/

int main(int argc, char *argv[])
{
	int i, j, sum = 0, num;

	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			sum += num;

			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (0);
				}
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
