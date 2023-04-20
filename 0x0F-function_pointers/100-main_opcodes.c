#include <stdlib.h>
#include <stdio.h>
#include"function_pointers.h"

/**
* main - main function
* @argc: the num of args
* @argv: the vector of args
* Return: always 0.
*/

int main(int argc, char **argv)
{
	char *m = (char *)main;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (; i > 0 ; i--)
	{
		printf("%02hhx%s", *m, i ? " " : "\n");
	}

	return (0);
}
