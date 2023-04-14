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

	a = malloc(sizeof(str));
	if (str == '\0' || a == 0)
	{
		return ('\0');
	}
	return (a);
	free(a);
}
