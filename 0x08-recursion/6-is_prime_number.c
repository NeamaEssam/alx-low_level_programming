#include"main.h"

/**
* prime - returns the natural square root of a number.
* @n: input
* @f: input
* Return: if n < 0, return -1
*/

int prime(int n, int f)
{
	if (f >= n && n > 1)
		return (1);

	if (n % f == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (prime(n, f + 1));
}

/**
* is_prime_number - returns the natural square root of a number.
* @n: input
* Return: if n < 0, return -1
*/

int is_prime_number(int n)
{
	return (prime(n, 2));
}
