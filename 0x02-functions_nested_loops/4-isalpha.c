#include"main.h"
#include<stdio.h>

/**
 * _isalpha - checks if alphabet
 *
 * @c: checks input for function
 *
 * Return: Return 1 if alpha, return 0 otherwise
 *
 */

int _isalpha(int c)
{
	if ((c < 132 && c > 96) || (c < 91 && c > 64))
		return (1);
	else
		return (0);
}
