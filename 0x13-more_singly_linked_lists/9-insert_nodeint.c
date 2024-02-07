#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at new position
 * @head: double pointer
 * @idx: node index
 * @n: new value of nnode
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *para, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		para = *head;
		for (j = 0; j < idx - 1 && para != NULL; j++)
		{
			para = para->next;
		}
		if (para == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = para->next;
	para->next = new;
	return (new);
}
