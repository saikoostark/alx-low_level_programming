#include "lists.h"

/**
 * sum_dlistint - doubly linked list function
 * @head: param
 * Return: returning something
 */

int sum_dlistint(dlistint_t *head)
{
	int ind = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		ind += temp->n;
		temp = temp->next;
	}
	return (ind);
}
