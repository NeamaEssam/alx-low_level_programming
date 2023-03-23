#include"main.h"
#include<stdio.h>

/**
* add -  adds two integers
*
* @a: checks input for function
*
* @b: checks input for function
*
* Return: sum of two int
*/

int add(int a, int b)
{
	int sum;

	sum = a + b;
	if (sum > 9)
		_putchar((sum / 10) + 48);
	_putchar((sum % 10) + 48);
	return (sum);
}
