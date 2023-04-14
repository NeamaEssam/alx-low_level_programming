#include"main.h"
#include<stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @height: input
* @width: input
* Return: pointer to 2D array
*/

int **alloc_grid(int width, int height)
{
	int **a;
	int i;

	if (width <= 0 || height <= 0)
		return ('\0');

	a = calloc(height * sizeof(int *));

	if (a == 0)
		return ('\0');

	for (i = 0; i < height; i++)
		a[i] = calloc(width * sizeof(int));

	return (a);
	free(a);
}
