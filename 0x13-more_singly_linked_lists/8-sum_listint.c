#include "lists.h"

/**
 * sum_listint - sum of all data of  linked list listint_t
 * @head: pointer to first node
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
