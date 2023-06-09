#include"main.h"
#include<stdio.h>


/**
* _strspn - gets the length of a prefix substring.
* @s: input
* @accept: input
* Return: int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n1, n2, j;

	n1 = 0;
	while (s[n1])
		n1++;

	n2 = 0;
	while (accept[n2])
		n2++;

	for (i = 0; i < n1; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
