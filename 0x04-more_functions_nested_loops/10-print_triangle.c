#include"main.h"
#include<stdio.h>

/**
* print_triangle - prints a triangle
* @size: input
* Return: always 0.
*/

void print_triangle(int size)
{
	int i, j, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			spaces = size - i;
			while (spaces != 0)
			{
				_putchar(' ');
				spaces--;
			}
			for (j = 0; j < i; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
