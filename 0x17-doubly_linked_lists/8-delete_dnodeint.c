#include "lists.h"

/**
 * delete_dnodeint_at_index - doubly linked list function
 * @head: param
 * @index: param
 * Return: returning something
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *temp = NULL;
	int ind = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	while (temp && ind <= index)
	{
		if (ind != index)
			continue;

		if (temp->prev)
			temp->prev->next = temp->next;
		else
			*head = temp->next;

		if (temp->next)
			temp->next->prev = temp->prev;

		free(temp);

		return (1);
	}

	return (-1);
}
