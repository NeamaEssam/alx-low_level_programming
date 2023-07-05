#include "lists.h"
/**
 * insert_nodeint_at_index - function to insert node at nth location
 * @head: pointer to head of struct listint_t type
 * @idx: unsigned int for location to add node
 * @n: int type for value of new node
 * Return: always successful
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *ptr;
	unsigned int i = 0;

	if (!head || !node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!idx)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	ptr = *head;

	while (ptr)
	{
		if (i == (idx - 1))
		{
			node->next = ptr->next;
			ptr->next = node;
			return (node);
		}
		i++;
		ptr = ptr->next;
	}
	free(node);
	return (NULL);
}
