#include"main.h"

/**
* get_bit -  returns the value of a bit at a given index.
* @n: input
* @index: input
* Return: value of bit at given index.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1 << index;
	unsigned int bit;

	bit = n & mask;
	return (bit);
}

