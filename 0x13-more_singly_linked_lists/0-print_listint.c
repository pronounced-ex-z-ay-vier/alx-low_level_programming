#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements of listint list
 * @h: Head of link node
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
