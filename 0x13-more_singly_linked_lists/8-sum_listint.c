#include "lists.h"

/**
 * sum_listint - function
 *
 * @head: param
 * Return: return a value
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int start = 0;

	while (ptr != NULL)
	{
		start += ptr->n;
		ptr = ptr->next;
	}

	return (start);
}
