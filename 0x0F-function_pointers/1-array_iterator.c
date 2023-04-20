
#include"function_pointers.h"
#include<stdio.h>

/**
* array_iterator - prints a name.
* @array: input
* @size: input
* @action: input
* Return: always 0
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last;

	last = array + size - 1;

	if (array && size && action)
	{
		while (array <= last)
		{
			action(*array+);
		}
	}
}
