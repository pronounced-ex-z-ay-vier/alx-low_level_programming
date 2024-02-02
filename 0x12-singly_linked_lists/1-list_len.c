#include "lists.h"

/**
 * list_len - Prints lenght of list
 * @h: head element
 * Return: lenght of the elements
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
