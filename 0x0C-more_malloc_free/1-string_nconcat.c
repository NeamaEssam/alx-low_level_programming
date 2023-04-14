#include"main.h"
#include<stdlib.h>

/**
* string_nconcat - concatenates two strings.
* @s1: input
* @s2: input
* @n: input
* Return: pointer to string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, n1, n2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n1 = 0;
	while (s1[n1])
		n1++;

	n2 = 0;
	while (s2[n2])
		n2++;

	if (n >= n2)
		n = n2;

	a = malloc(n1 + n + 1);
	if (a == 0)
	{
		return ('\0');
	}
	for (i = 0; i < n1; i++)
	{
		a[i] = s1[i];
	}
	for (; i < (n1 + n); i++)
	{
		a[i] = s2[i - n1];
	}

	return (a);
	free(a);
}
