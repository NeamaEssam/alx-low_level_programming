#include"main.h"
#include<stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: input
* Return: pointer to string
*/

char *_strdup(char *str)
{
	char *a;
	unsigned int i, n;

	if (str == NULL)
	{
		return ('\0');
	}
	n = 0;
	while (str[n])
		n++;

	a = malloc(n + 1);
	if (a == 0)
	{
		return ('\0');
	}


	for (i = 0; i < n; i++)
	{
		a[i] = str[i];
	}

	return (a);
	free(a);
}
