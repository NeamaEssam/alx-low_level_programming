#include"main.h"
#include<stdlib.h>

/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: input
* @old_size: input
* @new_size: input
* Return: Always 0
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	a = malloc(new_size);
	if (!a)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;

	while (old_size--)
		a[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (a);
}
