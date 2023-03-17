#include "lists.h"

/**
 * free_dlistint - Deletes a doublylinked list
 *
 * @head: Pointer to the first node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	/*IF LIST IS EMPTY*/
	if (!head)
	{
		return;
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		ptr->prev = NULL;
		free(head);
		head = ptr;
	}
	free(head);
}
