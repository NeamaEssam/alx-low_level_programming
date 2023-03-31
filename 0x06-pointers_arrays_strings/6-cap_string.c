#include"main.h"
#include<stdio.h>

/**
* separator - checks if separator char
* @c: input
* Return: 1 if true, 0 if false
*/

int separator(char c)
{
	int i;
	char s[] = " \t\n,.!?\"(){}";

	for (i = 0; i <= 11; i++)
		if (c == s[i])
			return (1);
	return (0);
}

/**
* cap_string - capitalize all chars of string
* @a: input
* Return: string
*/

char *cap_string(char *a)
{
	int i, n;

	n = 0;
	while (a[n])
		n++;

	if (a[0] >= 97 && a[0] <= 122)
		a[0] -= 32;

	for (i = 1; i < n; i++)
	{
		if (separator(a[i]) && (a[i + 1] >= 97 && a[i + 1] <= 122))
			a[i + 1] -= 32;
	}
	return (a);
}
