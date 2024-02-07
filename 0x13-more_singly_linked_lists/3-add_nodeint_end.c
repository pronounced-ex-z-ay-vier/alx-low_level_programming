#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds new node at end of list
 * @head: Head to double pointer
 * @n: int added to list
 * Return: NULL if fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *par;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	par = *head;
	while (par->next != NULL)
	{
		par = par->next;
	}
	par->next = new;
	return (new);
}

