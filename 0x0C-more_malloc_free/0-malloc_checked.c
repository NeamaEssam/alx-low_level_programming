#include"main.h"

/**
* malloc_checked -  allocates memory using malloc.
* @b: input
* Return: Always 0.
*/

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == 0)
		return (98);

	return (a);
}
