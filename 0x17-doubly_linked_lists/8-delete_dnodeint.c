#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at specific index
 *
 * @head: Pointer to first node
 *
 * @index: index of node to delete
 *
 * Return: 1 if successful and -1 if unsuccessful.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *toDelete = *head;
	dlistint_t *prev_node, *next_node;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = toDelete->next;
		(*head)->prev = NULL;
		free(toDelete);
		return (1);
	}
	if (index > 0)
	{
		while (index > 0)
		{
			toDelete = toDelete->next;
			index--;
		}
		prev_node = toDelete->prev;
		next_node = toDelete->next;
		prev_node->next = next_node;
		next_node->prev = prev_node;
		free(toDelete);
		toDelete = NULL;

		return (1);
	}
	return (-1);
}
