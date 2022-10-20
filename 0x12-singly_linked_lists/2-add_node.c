#include "lists.h"

/**
* add_node - adds a node at the beginning of a list
*
* @str: New node to be added
*
* @head: pointer to the first node
*
* Return: apointer to the first node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *first;
	size_t num;

	first = malloc(sizeof(list_t));
	if (first == NULL)
	{
		return (NULL);
	}
	first->str = strdup(str);
	for (num = 0; str[num]; num++)
	{
		;
	}
	first->len = num;
	first->next = *head;
	*head = first;

	return (*head);
}
