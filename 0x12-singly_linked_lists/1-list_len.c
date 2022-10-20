#include "lists.h"

/**
* list_len - returns the number of elements in a linked list
*
* @h: pointer that traverses the linked list
*
* Return: number of elements in a linked list
*/

size_t list_len(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}
