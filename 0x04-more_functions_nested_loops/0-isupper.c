#include"main.h"
#include<stdio.h>

/**
* _isupper -   prints the n times table, starting with 0.
* @c: input
* Return: 1 if c is upper, 0 otherwise
*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (0);
	}
}
