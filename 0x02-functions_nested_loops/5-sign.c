#include"main.h"
#include<stdio.h>

/**
 * print_sign - prints the sign of an integer
 *
 * @n: chacks the number for function
 *
 * Return: return 1 if +ve, 0 if zero, -1 if -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
