#include "lists.h"

/**
 * get_nodeint_at_index - nth node of linked list
 * @head: pointer to first node
 * @index: index of the node
 * Return: pointer of index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int d;

	if (head == NULL)
		return (NULL);
	for (d = 0; d < index; d++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
