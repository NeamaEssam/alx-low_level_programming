#include "main.h"

/**
* wildcmp -  checks if two strings can be considered identical
* @s1: input
* @s2: input
* Return: 1 if they are identical, 0  otherwise
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *(s2 + 1) != '\0' && *s2 == '*')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	return (0);
}
