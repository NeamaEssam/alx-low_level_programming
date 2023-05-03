#include"lists.h"

/**
* free_listint2 - free list
* @head: pointer to head
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr1, *ptr2;

	if (!head)
		return;

	ptr1 = *head;

	while (ptr1)
	{
		ptr2 = ptr1;
		ptr1 = ptr1->next;
		free(ptr2);
	}

	*head = NULL;

}
