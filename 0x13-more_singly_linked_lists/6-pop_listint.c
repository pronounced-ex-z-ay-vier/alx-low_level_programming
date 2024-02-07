#include "lists.h"

/**
 * pop_listint - Deletes head node
 * @head: Double pointer
 * Return: nothing
 */

int pop_listint(listint_t **head)
{
	listint_t *begin;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	begin = *head;
	*head = begin->next;
	n = begin->n;
	free(begin);
	return (n);
}
