#include"main.h"

/**
* _strlen_recursion - returns the length of a string.
* @s: input
* Return: length
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
* checker - check on each character
* @s: input
* @n1: input
* @n2: input
* Return: .
*/

int checker(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == (n2 + 1))
			return (1);
		return (0 + checker(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
* is_palindrome - returns if a string is palindrome or not.
* @s: input
* Return: 1 if palindrome , 0  if not.
*/

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (checker(s, 0, _strlen_recursion(s) - 1));
}
