#include "lists.h"

/**
 * newNode - Creates new node and inserts into DLL
 *
 * @prev_node: Pointer to the node before the new node
 *
 * @n: data
 *
 * Return: Pointer to new node
 */
dlistint_t *newNode(dlistint_t *prev_node, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *next_node;

	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	next_node = prev_node->next;
	prev_node->next = new;
	next_node->prev = new;
	new->next = next_node;
	new->prev = prev_node;
	return (new);
}

/**
 * insert_dnodeint_at_index - Inserts a new node into a DLL
 *
 * @h: Pointer to head
 *
 * @idx: Index
 *
 * @n: data
 *
 * Return: Pointer to new node or NULL if unsuccessful
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev_node; /*next_node;*/
	size_t length = dlistint_len(*h);

	prev_node = *h;

	if (idx > (length - 1))
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	if (idx == (length - 1))
	{
		return (add_dnodeint_end(h, n));
	}

	while (idx > 1)
	{
		prev_node = prev_node->next;
		idx--;
	}
	return (newNode(prev_node, n));
}
