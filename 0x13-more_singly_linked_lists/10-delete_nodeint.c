#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at the index
 * @head: double pointer
 * @index: node index
 * Return: pointer to index node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *para, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	para = *head;
	for (j = 0; j < index - 1; j++)
	{
		if (para->next == NULL)
			return (-1);
		para = para->next;
	}
	next = para->next;
	para->next = next->next;
	free(next);
	return (1);
}
