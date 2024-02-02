#include "lists.h"

/**
 * add_node - Adds a new node at beginning of list
 * @head: Head of node
 * @str: The string to store
 * Return: address of new element or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newelement;
	unsigned int a, count = 0;

	newelement = malloc(sizeof(list_t));
	if (newelement == NULL)
		return (NULL);
	newelement->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		count++;
	newelement->len = count;
	newelement->next = *head;
	*head = newelement;

	return (*head);
}
