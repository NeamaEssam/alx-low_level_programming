#include"main.h"

/**
* *_strcpy - prints n elements of an array of integers, followed by a new line.
* @dest: input
* @src: input
* Return: character.
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
