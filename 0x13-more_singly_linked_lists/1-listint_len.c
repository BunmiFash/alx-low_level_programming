#include "lists.h"

/**
 * listint_len - counts the number of nodes in a singly linked list
 *
 * @h: Head - points to the first node
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *count = h;

	size_t c = 0;

	while (count != NULL)
	{
		c += 1;
		count = count->next;
	}
	return (c);
}
