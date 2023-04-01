#include"main.h"

/**
 * leet - encodes a string into 1337.
 * @a: input
 * Return: array
 */

char *leet(char *a)
{
	int i;
	char letter[] = "aeotl";
	char encoder[] = "43071";

	while (*a)
	{
		for (i = 0; i < 5; i++)
		{
			if (*a == letter[i] || *a == (letter[i] - 32))
				*a = encoder[i];
		}
		a++;
	}
	return (a);
}
