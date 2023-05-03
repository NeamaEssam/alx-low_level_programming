#include"lists.h"

/**
* listint_len - get the number of elements of list
* @h: pointer to head
* Return: size of list
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;

	}
	return (i);
}
