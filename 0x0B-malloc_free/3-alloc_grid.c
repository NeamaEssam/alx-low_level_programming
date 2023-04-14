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
	int i, j;

	if (width <= 0 || height <= 0)
		return ('\0');

	a = malloc(height * sizeof(int *));

	if (a == 0)
		return ('\0');

	for (i = 0; i < height; i++)
		a[i] = malloc(width * sizeof(int));

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
		free(a[i]);
	}

	return (a);
	free(a);
}
