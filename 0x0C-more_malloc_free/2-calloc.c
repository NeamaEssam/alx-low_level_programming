#include"main.h"
#include<stdlib.h>

/**
* _calloc - allocates memory for an array, using malloc.
* @nmemb: input
* @size: input
* Return: always 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return ('\0');
	}
	a = malloc(nmemb * size);
	if (a == 0)
	{
		return ('\0');
	}
	for (i = 0; i < nmemb * size; i++)
	{
		a[i] = 0;
	}
	return (a);
	free(a);

}
