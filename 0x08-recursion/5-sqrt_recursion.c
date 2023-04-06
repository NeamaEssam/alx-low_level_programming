#include"main.h"

/**
* square - returns the natural square root of a number.
* @n: input
* @r: input
* Return: if r < 0, return -1
*/

int square(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	else if (r * r < n)
	{
		return (square(n, r + 1));
	}
	else
	{
		return(-1);
	}
}

/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: input
* Return: if n < 0, return -1
*/

int _sqrt_recursion(int n)
{
	return (square(n, 1));	
}
