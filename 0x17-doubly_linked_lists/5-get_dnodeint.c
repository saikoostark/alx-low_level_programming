#include "lists.h"

/**
 * get_dnodeint_at_index - doubly linked list function
 * @head: param
 * @index: param
 * Return: returning something
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ind = 0;
	dlistint_t *temp = head;

	while (ind <= index && temp)
	{
		if (ind == index)
			return (temp);
		temp = temp->next;
		ind++;
	}
	return (NULL);
}
