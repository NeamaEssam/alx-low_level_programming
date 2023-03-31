#include"main.h"

/**
* _strncpy - copies a string
* @dest: input
* @src: input
* @n: input
* Return: char.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int n1, n2, i;

	n1 = 0;
	while (dest[n1])
		n1++;

	n2 = 0;
	while (src[n2])
		n2++;

	if (n < n2)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	dest[i++] = '\0';
	return (dest);
}
