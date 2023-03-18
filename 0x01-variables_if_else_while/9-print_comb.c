#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int j;

	j = 0;
	while (j < 10)
	{
		putchar(j + 48);

		if (j != 9)
		{
			putchar(',');
			putchar(' ');
		}

		j++;
	}
	putchar('\n');
	return (0);
}
