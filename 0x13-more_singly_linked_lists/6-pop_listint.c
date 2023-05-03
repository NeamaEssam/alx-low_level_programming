#include"lists.h"

/**
* pop_listint - remove head pf list
* @head: pointer to head
* Return: value of popped node
*/

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int value;

	if (!head || !head->n)
		return (0);

	ptr = *head;
	value = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (value);
}
