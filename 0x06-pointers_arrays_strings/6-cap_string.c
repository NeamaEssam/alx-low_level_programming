#include"main.h"
#include<stdio.h>

/**
* islower - checks if lowercase
* @b: input
* Return: 1 if true, 0 if false
*/

int islower(char b)
{
	return (b >= 97 && b <= 122);
}

/**
* separator - checks if separator char
* @c: input
* Return: 1 if true, 0 if false
*/

int separator(char c)
{
	int i;
	char s[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == s[i])
			return (1);
	return (0);
}

/**
* cap_string - capitalize all chars of string
* @a: input
* Return: string
*/

char *cap_string(char * a)
{
	char *p = a;
	int s = 1;

	while (*a)
	{
		if (separator(*a))
			s = 1;
		else if (islower(*a) && separator)
		{
			*a -= 32;
			s = 0;
		}
		else
			s = 0;
		a++;
	}
	return (p);
}
