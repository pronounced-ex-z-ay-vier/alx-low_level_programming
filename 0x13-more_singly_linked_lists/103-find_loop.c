#include "lists.h"

/**
 * find_listint_loop - Function finds loop of linked list
 * @head: pointer to start of list
 * Return: Address of node where loop begins or NULL where no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cat, *dog;

	cat = dog = head;
	while (cat && dog && dog->next)
	{
		cat = cat->next;
		dog = dog->next->next;
		if (cat == dog)
		{
			cat = head;
			break;
		}
	}
	if (!cat || !dog || dog->next->next)
		return (NULL);
	while (cat != dog)
	{
		cat = cat->next;
		dog = dog->next;
	}
	return (dog);
}
