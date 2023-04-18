#include"dog.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * _strlen - return length of a string
 * @s: input
 * Return: int
 */

int _strlen(char *s)
{
	int n;

	n = 0;
	while (s[n])
		n++;

	return (n);
}
/**
 * _strcpy - function to copy string from source to destination
 *@dest: pointer
 *@src: pointer
 * Return: return pointer
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

/**
* new_dog - creates a new dog.
* @name: input
* @age: input
* @owner: input
* Return: pointer
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(struct dog));
	if (newdog == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newdog->name == NULL)
		return (NULL);
	_strcpy(newdog->name, name);

	newdog->age = age;

	if (owner == NULL)
	{
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newdog->owner == NULL)
		return (NULL);
	_strcpy(newdog->owner, owner);

	return (newdog);
}
