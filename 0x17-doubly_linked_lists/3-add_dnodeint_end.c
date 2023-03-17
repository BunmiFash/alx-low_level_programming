#include "lists.h"
/*
 * add_nodeint_end - A function that adds a node at
 * the end of a doubly linked list
 *
 * @head: Pointer to the first node
 *
 * @n: Data of node
 *
 * Return: Pointer to the new node
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *prev_node = *head;

	/* IF ALLOCATION FAILED*/
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	/* CHECK FOR EMPTY LIST*/
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (prev_node->next != NULL)
	{
		prev_node = prev_node->next;
	}
	prev_node->next = new;
	new->prev = prev_node;

	return (new);
}
