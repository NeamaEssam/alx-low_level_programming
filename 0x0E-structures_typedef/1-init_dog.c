#include"dog.h"

/**
* init_dog - initialize a variable of type struct dog
* @d: input
* @name: input
* @age: input
* @owner: input
* Return: Always 0
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
