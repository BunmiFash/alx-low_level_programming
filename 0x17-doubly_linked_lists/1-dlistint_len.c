#include "lists.h"

/**
 * dlistint_len -  A function that returns the number of nodes of a linked list
 *
 * @h: Pointer to the first node
 *
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
