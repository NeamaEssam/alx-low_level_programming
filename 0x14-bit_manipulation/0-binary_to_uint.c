#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: const
 * Return: converted num.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (!b)
		return (0);

	for (x = 0; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		else if (*b == '1')
			x = (x << 1) | 1;
		else if (*b == '0')
			x <<= 1;
		else
			break;
	}

	return (x);
}
