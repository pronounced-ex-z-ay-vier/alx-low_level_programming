#include "lists.h"

/**
 * _ra - reallocates memory of an  array of pointers
 * @list: appended list, old
 * @size: size of new list
 * @nn: new node added to the list
 * Return: pointer to new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *nn)
{
	listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = nn;
	free(list);
	return (newlist);
}

/**
 * free_listint_safe - prints linked list
 * @head: double pointer to head of list
 * Return: nodes in the list
 */

size_t free_listint_safe(listint_t **head)
{
	size_t i, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _ra(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}

