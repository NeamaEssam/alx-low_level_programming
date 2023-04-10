#include"main.h"
#include<stdio.h>


/**
* _strstr - gets the length of a prefix substring.
* @haystack: input
* @needle: input
* Return: char pointer
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int n1, n2, i, j;
	char *t;

	n1 = 0;
	while (haystack[n1])
		n1++;

	n2 = 0;
	while (needle[n2])
		n2++;

	for (i = 0; i < n1; i++)
	{

		if (haystack[i] == needle[0])
		{
			t = &haystack[i];
			return (t);
		}

	}
	return ('\0');
}
