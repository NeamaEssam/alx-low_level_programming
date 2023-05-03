#include "main.h"
#include<stdlib.h>

/**
* _strlen - return string length
* @s: input
* Return: length of string
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}

	while (s[i])
		i++;

	return (i);
}


/**
* argstostr - concatenates all the arguments of your program.
* @ac: input
* @av: input
* Return: pointer to a new string, or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	int i, j;
	int len = 0, size = 0;
	char *new_string;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]) + 1;
	}

	new_string = malloc(sizeof(char) * (len + 1));
	if (new_string == 0)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new_string[size] = av[i][j];
			size++;
		}
		new_string[size] = '\n';
		size++;
	}
	new_string[size] = '\0';
	return (new_string);
}
