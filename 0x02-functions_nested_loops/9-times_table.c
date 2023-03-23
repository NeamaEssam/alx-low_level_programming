#include"main.h"
#include<stdio.h>

/**
* times_table -  prints the 9 times table
*
* Return: Always 0.
*/

void times_table(void)
{
	int i, j, r;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			r = i * j;
			if (r <= 9)
				_putchar(' ');
			else
				_putchar((r / 10) + 48);

			_putchar((r / 10) + 48);
		}
		_putchar('\n');
	}
}
