#include"main.h"
#include<stdio.h>

/**
* print_times_table -   prints the n times table, starting with 0.
*
* @n: checks input for function
*
* Return: Always 0.
*/

void print_times_table(int n)
{
	int i, j, r;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				r = i * j;
				if (r <= 9)
					_putchar(' ');
				if (r <= 99)
					_putchar(' ');

				if (r >= 100)
				{
					_putchar((r / 100) + 48);
					_putchar(((r / 100) % 10) + 48);
				}
				else if (r <= 99 && r >= 10)
					_putchar((r / 10) + 48);
				_putchar((r % 10) + 48);
			}
	_putchar('\n');
		}
	}
}
