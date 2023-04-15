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

	if (new_size > old_size || ptr == '\0')
	{
		a = malloc(new_size);
		free(ptr);
		return (a);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != '\0')
	{
		free(ptr);
		return ('\0');
	}
	return (ptr);

}
