#include"main.h"

/**
 * leet - encodes a string into 1337.
 * @a: input
 * Return: array
 */

char *leet(char *a)
{
	int i, n;

	n = 0;
	while (a[n])
		n++;

	for (i = 0; i < n; i++)
	{
		if (a[i] == 'a' || a[i] == 'A')
			a[i] = '4';
		else if (a[i] == 'e' || a[i] == 'E')
			a[i] = '3';
		else if (a[i] == 'o' || a[i] == 'O')
			a[i] = '0';
		else if (a[i] == 't' || a[i] == 'T')
			a[i] = '7';
		else if (a[i] == 'l' || a[i] == 'L')
			a[i] = '1';
	}
	return (a);
}
