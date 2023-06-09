#include"main.h"

/**
* set_bit - Sets the value of a bit at a given index to 1.
* @n: input
* @index: input
* Return: Sets the value of a bit at a given index to 1.
**/

int set_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) *8)
		return (-1);
	*n ^= (1 << index);
	return (1);
}

