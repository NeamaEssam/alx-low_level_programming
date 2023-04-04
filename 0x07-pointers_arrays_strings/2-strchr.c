#include"main.h"
#include<stdio.h>


/**
* _strchr - locates a character in a string.
* @s: input
* @c: input
* Return: pointer
*/

char *_strchr(char *s, char c)
{
	int i, f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s == c)
		{
			f = 1;
			break;
		}
		s++;
	}
	if (f)
		return (s);
	else
		return ('\0');
}
