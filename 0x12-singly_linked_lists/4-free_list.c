#include "lists.h"

/**
 * free_list - Free memory allocated to list
 * @head: Pointer to first node of list to free
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
