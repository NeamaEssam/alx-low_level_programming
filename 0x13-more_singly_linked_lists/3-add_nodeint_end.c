#include"lists.h"

/**
* add_nodeint_end - add new node at the end
* @head: pointer to head
* @n: value of new head data
* Return: pointer to node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end = malloc(sizeof(listint_t));
	listint_t *ptr;

	if (!head || !new_end)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;

	if (!*head)
	{
		*head = new_end;
	}
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;

		ptr->next = new_end;
	}

	return (new_end);
}
