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
	int i, j;

	i = 0;
	j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(',');
			putchar('');
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
