#include"lists.h"

/**
* add_nodeint - get the number of elements of list
* @head: pointer to head
* @n: value of new head data
* Return: pointer to list
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (!head || !new_head)
		return (NULL);

	new_head->n = n;
	new_head->next = NULL;

	if (*head)
	{
		new_head->next = *head;
	}
	*head = new_head;
	return (new_head);

}
