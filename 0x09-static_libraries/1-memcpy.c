#include"main.h"

/**
* _memcpy - copies n bytes from memory area src
* to memory area dest Returns a pointer to dest
* @n: input
* @src: input
* @dest: input
* Return: pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
