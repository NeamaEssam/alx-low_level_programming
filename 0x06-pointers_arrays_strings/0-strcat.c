#include"main.h"

/**
* _strcat - concatenates two strings
* @dest: input
* @src: input
* Return: char.
*/

char *_strcat(char *dest, char *src)
{
	int n1, n2;

	n1 = 0;
	while (dest[n1])
		n1++;

	for (n2 = 0; src[n2]; n2++)
	{
		dest[n1++] = src[n2];
	}

	return (dest);
}
