#include"main.h"
#include<stdio.h>


/**
* _strpbrk - gets the length of a prefix substring.
* @s: input
* @accept: input
* Return: int
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int n1, n2, i, j;
	char *t;

	n1 = 0;
	while (s[n1])
		n1++;

	n2 = 0;
	while (accept[n2])
		n2++;

	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			if (s[i] == accept[j])
			{
				t = &s[i];
				return (t);
			}
		}
	}
	return ('\0');
}
