#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees list
 * @head: Head of nlist
 * Return: Null if fail
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
