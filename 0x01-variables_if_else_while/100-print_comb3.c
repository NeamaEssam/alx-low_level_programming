#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i, j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			putchar('0' + i);
			putchar('0' + j);
			if ((i != 9) && (j != 9))
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	putchar('\n');
	return (0);
}
