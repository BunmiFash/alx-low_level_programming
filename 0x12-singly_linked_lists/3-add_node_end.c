#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list
*
* @str: New node
*
* @head: pointer to the first node
*
* Return: address to the new element
* or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *node;
	size_t num;

	end = malloc(sizeof(list_t));
	if (end == NULL)
	{
		return (NULL);
	}
	end->str = strdup(str);
	for (num = 0; str[num]; num++)
	{
		;
	}
	end->len = num;
	end->next = NULL;
	node = *head;

	if (node == NULL)
	{
		*head = end;
	}
	else
	{
		while (node->next != NULL)
		{
			node = node->next;
			node->next = end;
		}
	}
	return (*head);
}
