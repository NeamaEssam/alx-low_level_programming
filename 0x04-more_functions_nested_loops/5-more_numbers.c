#include"main.h"
#include<stdio.h>

/**
* more_numbers - prints the numbers, from 0 to 9 excipt 2 and 4
* Return: always 0.
*/

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i + 48);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
