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
	int i;

	if (min > max)
	{
		return ('\0');
	}

	/*size = (max - min) + 1;*/
	a = malloc((max - min + 1) * sizeof(int));

	if (a == 0)
		return ('\0');

	while (min <= max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
	free(a);

}
