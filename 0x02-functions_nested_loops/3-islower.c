#include"main.h"
#include<stdio.h>

/**
 * _islower - checks for lowercase character
 *
 * @c: checks input for function
 *
 * Return: Returns 1 if c is lowercase, Returns 0 otherwise
 */

int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	else
		return (0);
}
