#include "lists.h"
/**
 * get_nodeint_at_index - function to return index of node
 * @index: index of node to be returned
 * @head: pointer to head
 * Return: pointer to the new node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;

	for (i = 0; ptr && i < index; i++)
		ptr = ptr->next;

	return (ptr);
}
