#include "lists.h"

/**
* free_list - frees a list
*
* @head: pointer to the first node
*
* Return: void
*/

void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
