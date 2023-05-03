#include"lists.h"

/**
* free_listint - free list
* @head: pointer to head
* Return: pointer to node
*/

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}

}
