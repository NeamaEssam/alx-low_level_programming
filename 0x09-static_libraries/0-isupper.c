#include"main.h"
#include<stdio.h>

/**
* _isupper - checks if c if upper
* @c: input
* Return: 1 if c is upper, 0 otherwise
*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
