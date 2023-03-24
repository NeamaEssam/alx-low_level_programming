#include"main.h"
#include<stdio.h>

/**
* print_diagonal - prints diagonal
* @n: input
* Return: always 0.
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		_putchar('\');
		for (i = 1; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
	}
}
