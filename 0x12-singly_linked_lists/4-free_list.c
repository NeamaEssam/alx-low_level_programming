#include"lists.h"

/**
* free_list - free list
* @head: address of ptr to head
* Return: always 0
*/

void free_list(list_t *head)
{
	list_t *ptr, *next_node;

	if (!head)
		return;

	ptr = head;
	while (ptr)
	{
		next_node = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = next_node;
	}
}
