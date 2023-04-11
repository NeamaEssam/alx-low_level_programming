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
	int i, res = 0, a = 0, n;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);

		if (n <= 0)
			printf("0\n");
		else
		{
			for (i = 0; i < 5 && n > 0; i++)
			{
				a = n / coins[i];
				if (a > 0)
				{
					n -= a * coins[i];
					res += a;
					a = 0;
				}
			}
			printf("%d\n", res);
		}
	}
	return (0);
}
