#include"main.h"

/**
* _strcmp - compares two strings.
* @s1: input
* @s2: input
* Return: int
*/

int _strcmp(char *s1, char *s2)
{
	int i, n1, n2, f = 0;

	n1 = 0;
	while (s1[n1])
		n1++;

	n2 = 0;
	while (s2[n2])
		n2++;

	for (i = 0; i < n1; i++)
	{
		if ((int)s1[i] == (int)s2[i])
			;
		else if ((int)s1[i] < (int)s2[i])
		{
			f = -1;
			break;
		}
		else if ((int)s1[i] > (int)s2[i])
		{
			f = 1;
			break;
		}
	}
	return (f);
}
