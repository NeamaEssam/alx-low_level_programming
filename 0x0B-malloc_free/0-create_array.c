#include"main.h"
#include<stdlib.h>

/**
* create_array - creates an array of chars,
* and initializes it with a specific char.
* @size: input
* @c: input
* Return: pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(size * sizeof(char));
	if (size == 0 || a == 0)
	{
		return ('\0');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}
	}
	return (a);
	free(a);
}
