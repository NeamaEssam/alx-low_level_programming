#include"lists.h"

/**
* _strlen - return string length
* @s: input
* Return: length of string
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}
	while (*s++)
		i++;

	return (i);
}

/**
* print_list - print a linked list
* @h: input
* Return: size of string
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->s), h->s ? h->s : "(nil)");
		h = h->next;
		i++;
	}

	return (i);
}
