#include"main.h"
#include<stdlib.h>

/**
* str_concat - concatenates two strings.
* @s1: input
* @s2: input
* Return: pointer to string
*/

char *str_concat(char *s1, char *s2)
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

	a = malloc(n1 + n2 + 1);
	if (a == 0)
	{
		return ('\0');
	}
	for (i = 0; i < n1; i++)
	{
		a[i] = s1[i];
	}
	for (; i < (n1 + n2); i++)
	{
		a[i] = s2[i - n1];
	}

	return (a);
	free(a);
}
