#include"main.h"
#include<stdio.h>

/**
* print_number - prints an integer.
* @n: input
* Return: always 0
*/

void print_number(int n)
{
	int m, i, temp;

	if (n < 0)
	{
		n = n * (-1);
		_putchar('-');
	}
	temp = n;
	m = 1;
	i = 1;
	while (i == 1)
	{
		if (temp / (m * 10) > 0)
			m = m * 10;
		else
			i = 0;
	}

	while (temp >= 0)
	{
		if (m == 1)
		{
			_putchar(temp % 10 + '0');
			temp = -1;
		}
		else
		{
			_putchar((temp / m % 10) + '0');
			m = m / 10;
		}
	}
}
