#include"main.h"

/**
* _strlen - returns the length of a string.
* @s: input
* Return: integer.
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		++i;

	return (i);
}
