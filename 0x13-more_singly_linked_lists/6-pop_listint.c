#include "lists.h"

/**
 * pop_listint - function
 *
 * @head: param
 * Return: return a value
 */

int pop_listint(listint_t **head)
{
	int x;
	listint_t *ptr = *head;

	if (*head == NULL)
		return (0);

	x = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	return (x);
}
