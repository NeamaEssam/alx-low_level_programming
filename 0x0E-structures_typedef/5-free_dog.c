#include"dog.h"
#include<stdio.h>
#include<stdlib.h>

/**
* free_dog - creates a new dog.
* @d: input
* Return: always 0
*/

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
