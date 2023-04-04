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
	int f = 0;

	while (s)
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
