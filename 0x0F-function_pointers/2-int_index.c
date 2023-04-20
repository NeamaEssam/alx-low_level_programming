#include"function_pointers.h"
#include<stdio.h>

/**
* int_index - searches for an integer.
* @array: input
* @size: input
* @cmp: input
* Return: index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
