#include "lists.h"

/**
 * _r - reallocates memory of an  array of pointers
 * @list: appended list, old
 * @size: size of new list
 * @nn: new node added to the list
 * Return: pointer to new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *nn)
{
	const listint_t **newlist;
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
 * print_listint_safe - prints linked list
 * @head: pointer to head of list
 * Return: nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
