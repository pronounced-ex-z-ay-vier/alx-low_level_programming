#include "lists.h"

/**
 * reverse_listint - Function to reverses linked list
 * @head: double pointer
 * Return: pointer to first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *former, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	former = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = former;
		former = *head;
		*head = next;
	}
	*head = former;
	return (*head);
}
