#include"main.h"
#include<stdio.h>

/**
* more_numbers - prints the numbers, from 0 to 9 excipt 2 and 4
* Return: always 0.
*/

void more_numbers(void)
{
	int i, j, k;

	for (j = 0; j < 11; j++)
	{
		for (i = 0; i < 15; i++)
		{
			k = i;
			if (i > 9)
			{
				_putchar(1 + 48);
				k = i % 10;
			}
			_putchar(k + 48);
		}
		_putchar('\n');
	}
}
