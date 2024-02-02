#include "lists.h"

/**
 * add_node_end - adds new node to the end of the list
 * @head: Head of the node
 * @str: String
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newelement, *end;
	unsigned int a, count = 0;

	newelement = malloc(sizeof(list_t));
	if (newelement == NULL)
		return (NULL);
	newelement->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		count++;
	newelement->len = count;
	newelement->next = NULL;
	end = *head;

	if (end == NULL)
		*head = newelement;
	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = newelement;
	}
	return (*head);
}
