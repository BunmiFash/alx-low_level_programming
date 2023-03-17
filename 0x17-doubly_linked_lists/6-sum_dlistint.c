#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of the list
 *
 * @head: Pointer to head
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);

}
