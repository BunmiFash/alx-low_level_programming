#include "lists.h"
/**
 * add_dnodeint - Function to add new node at the beginning of a list.
 *
 * @head: Double pointer to head
 *
 * @n: Data to be added to node
 *
 * Return: Pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	/* IF ALLOCATION FAILED */
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	/* FOR AN EMPTY LIST */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	new->next = *head;
	new->prev = NULL;
	(*head)->prev = new;
	*head = new;
	return (new);
}
