#include"main.h"
#include<stdlib.h>

/**
* array_range - creates an array of integers.
* @min: input
* @max: input
* Return: pointer
*/

int *array_range(int min, int max)
{
	char *a;
	unsigned int i, size;

	if (min > max)
	{
		return ('\0');
	}

	size = (max - min) + 1;
	a = malloc(size * sizeof(int));

	for (i = 0; i < size && min <= max; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
	free(a);

}
