#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the node at the specified index
 *
 * @head: Pointer to the first node
 *
 * @index: Position of node
 *
 * Return: Specified node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;

	if (head == NULL)
	{
		return (NULL);
	}
	if (index == 0)
	{
		return (head);
	}
	while (index > 0 && ptr->next != NULL)
	{
		ptr = ptr->next;
		index--;
	}
	return (ptr);
}
