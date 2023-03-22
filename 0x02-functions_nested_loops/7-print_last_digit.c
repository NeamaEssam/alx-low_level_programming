#include"main.h"
#include<stdio.h>

/**
* print_last_digit - returns last digit
*
* @n: checks the num for func
*
* Return: return n
*/

int print_last_digit(int n)
{
	int l;

	if (n < 0)
		l = -1 * (n % 10);
	else
		l = n % 10;

	_putchar(l + '0');
	return (l);
}
