#include"main.h"

/**
* _strncat - concatenates two strings
* @dest: input
* @src: input
* @n: input
* Return: char.
*/

char *_strncat(char *dest, char *src, int n)
{
	int n1, n2;

	n1 = 0;
	while (dest[n1])
		n1++;

	for (n2 = 0; n2 < n; n2++)
	{
		dest[n1++] = src[n2];
	}

	return (dest);
}
