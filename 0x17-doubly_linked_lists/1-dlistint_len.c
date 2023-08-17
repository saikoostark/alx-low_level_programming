#include "lists.h"

/**
 * dlistint_len - doubly linked list function
 * @h: param
 * Return: returning something
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;
	dlistint_t *temp = (dlistint_t *)h;

	while (temp != NULL)
	{
		num++;
		temp = temp->next;
	}
	return (num);
}
