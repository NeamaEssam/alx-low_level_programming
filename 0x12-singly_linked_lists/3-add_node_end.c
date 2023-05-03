#include"lists.h"

/**
* add_node_end - adds a node to the end
* @head: address of ptr to head
* @str: str field of node
* Return: size of list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end = malloc(sizeof(list_t));
	list_t *ptr = *head;

	if (!head || !new_end)
		return (NULL);

	if (str)
	{
		new_end->str = strdup(str);
		if (!new_end->str)
		{
			free(new_end);
			return (NULL);
		}

		new_end->len = _strlen(new_end->str);
	}
	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;

		ptr->next = new_end;
	}
	else
	{
		*head = new_end;
	}

	return (new_end);

}
